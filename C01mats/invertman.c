/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 03:45:54 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/10 19:16:09 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int p_aux;
	int size_aux;

	size_aux = size - 1;
	p_aux = 0;
	while (size_aux >= 0)
	{
		aux[p_aux] = tab[size_aux];
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

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_rev_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
