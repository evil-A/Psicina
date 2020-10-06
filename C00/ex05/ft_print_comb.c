/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:12:11 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/08 18:12:37 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(char c, char d, char u, char count)
{
	if (count != 0)
	{
		write(1, ", ", 2);
	}
	if (c < d && d < u)
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;
	int		count;

	count = 0;
	c = '0' - 1;
	while (c++ < '9')
	{
		d = c;
		while (d++ < '9')
		{
			u = d;
			while (u++ < '9')
			{
				printing(c, d, u, count);
				count++;
			}
		}
	}
}
