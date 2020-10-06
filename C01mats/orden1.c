/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orden1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:12:00 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/10 21:59:18 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;
	int	size2;
	int	size3;

	size2 = size - 1;
	size3 = size - 2;
	i = 0;
	while (i <= size3)
	{
		j = i + 1;
		while (j <= size2)
		{
			if (tab[j] < tab[i])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int	size;
	int	tab[5];

	tab[0] = 6;
	tab[1] = 0;
	tab[2] = -3;
	tab[3] = 4;
	tab[4] = 5;
	ft_sort_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
