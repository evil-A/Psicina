/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 03:45:54 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/10 19:19:07 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
