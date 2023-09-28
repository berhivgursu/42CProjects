/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursu <bgursu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:54:44 by bgursu            #+#    #+#             */
/*   Updated: 2023/09/20 11:02:48 by bgursu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (a < argc)
	{
		while (argv[a][i] && argc)
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		write(1, "\n", 1);
		a++;
		i = 0;
	}
}
