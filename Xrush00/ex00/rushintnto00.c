/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushintnto00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:42:18 by vvarodi           #+#    #+#             */
/*   Updated: 2019/09/07 21:11:46 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char brick)
{
	write(1, &brick, sizeof(brick));
}

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
	else if ((c == 0 || c == (x - 1)) && ( l != 0 && l != (y - 1))) 
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

int		main(void)
{
	rush(7, 12);
	return (0);
}
