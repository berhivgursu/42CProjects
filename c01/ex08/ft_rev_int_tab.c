/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursu <bgursu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:47:32 by bgursu            #+#    #+#             */
/*   Updated: 2023/09/11 21:08:43 by bgursu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	sorted;

	i = 0;
	while (i < (size - 1))
	{
		if (tab [i] > tab [i +1])
		{
			tmp = tab[i];
			tab[i] = tab[i +1];
			tab[i +1] = tmp;
		}
		i++;
	}
	sorted = 1;
	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
			sorted = 0;
		i++;
	}
	if (sorted == 0)
		ft_sort_int_tab (tab, size);
}
