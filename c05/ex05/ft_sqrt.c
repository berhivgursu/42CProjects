/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursu <bgursu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:49:56 by bgursu            #+#    #+#             */
/*   Updated: 2023/09/19 22:08:59 by bgursu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (guess <= nb / 2)
	{
		if (nb == guess * guess && guess <= 46341)
		{
			return (guess);
		}
		guess++;
	}
	return (0);
}
