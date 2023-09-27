/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursu <bgursu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:10:22 by bgursu            #+#    #+#             */
/*   Updated: 2023/09/16 19:34:37 by bgursu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*tmp;

	tmp = str;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*tmp)
	{
		i = 0;
		if (*tmp == to_find[0])
		{
			while (tmp[i] == to_find[i] && to_find[i])
			{
				i++;
			}
			if (to_find[i] == '\0')
			{
				return (tmp);
			}
		}
		tmp++;
	}
	return (0);
}
