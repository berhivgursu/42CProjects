/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursu <bgursu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:07:47 by bgursu            #+#    #+#             */
/*   Updated: 2023/09/22 21:00:15 by bgursu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc((argc + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		array[i].size = ft_strlen(argv[i]);
		array[i].str = argv[i];
		array[i].copy = ft_strdup(argv[i]);
		i++;
	}
	array[i].size = 0;
	array[i].copy = 0;
	array[i].str = 0;
	return (array);
}
