/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursu <bgursu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:44:03 by bgursu            #+#    #+#             */
/*   Updated: 2023/09/20 11:51:45 by bgursu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		while (argv[j][i] && argc)
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j--;
	}
}
