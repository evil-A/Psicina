/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orden1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:12:00 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/10 22:05:36 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
