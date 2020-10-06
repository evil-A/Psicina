/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orden.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:25:26 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/10 19:57:15 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int p_aux;
	int size_aux;
	int high;
	int	aux[size];
	size_aux = size;
	p_aux = 1;
	high = tab[0];
	while (size_aux >= 0)
	{
		if(tab[p_aux] > high)
		{
			high = tab[p_aux];
		}
		size_aux--;
		p_aux++;
	}
	p_aux = 0;
	while (p_aux < size)
	{
		tab[p_aux] = aux[p_aux];
		p_aux++;
	}
}

int		main(void)
{
	int	size;
	int	tab[5];

	tab[0] = 2;
	tab[1] = 8;
	tab[2] = 3;
	tab[3] = 7;
	tab[4] = 5;
	ft_sort_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
