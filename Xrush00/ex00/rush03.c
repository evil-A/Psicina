/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:00:18 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/07 17:04:35 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	conditions(int x, int y, int c, int l)
{
	if ((c == 0 && l == 0) || (c == 0 && l == (y - 1)))
	{
		ft_putchar('A');
	}
	else if ((c == (x - 1) && l == 0) || (c == (x - 1) && (l == (y - 1))))
	{
		ft_putchar('C');
	}
	else if (l != 0 && l != (y - 1) && c != 0 && c != (x - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
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
