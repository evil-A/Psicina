/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 22:36:33 by hbarrius          #+#    #+#             */
/*   Updated: 2019/09/08 23:04:45 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char brick);

void	conditions(int x, int y, int c, int l)
{
	if ((c == 0 && l == 0) || (c == (x - 1) && l == 0))
	{
		ft_putchar('o');
	}
	else if ((c == 0 && l == (y - 1)) || (c == (x - 1) && (l == (y - 1))))
	{
		ft_putchar('o');
	}
	else if ((c == 0 || c == (x - 1)) && (l != 0 && l != (y - 1)))
	{
		ft_putchar('|');
	}
	else if (l != 0 && l != (y - 1) && c != 0 && c != (x - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('-');
	}
}

void	rush(int x, int y)
{
	int c;
	int l;

	c = 0;
	l = 0;
	while (l <= (y - 1))
	{
		while (c <= (x - 1))
		{
			conditions(x, y, c, l);
			c++;
		}
		ft_putchar('\n');
		l++;
		c = 0;
	}
}
