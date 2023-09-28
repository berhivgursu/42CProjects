/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursu <bgursu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:47:43 by bgursu            #+#    #+#             */
/*   Updated: 2023/09/19 14:01:23 by bgursu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (nb / a >= a)
	{
		if (!(nb % a))
		{
			return (0);
		}
		else
		{
			a += 1;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	else if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (ft_is_prime(nb) == 0)
	{
		if (ft_is_prime(nb + 1) == 1)
		{
			return (nb + 1);
		}
		else
		{
			nb++;
		}
	}
	return (nb);
}