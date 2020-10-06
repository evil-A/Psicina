/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo200.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:12:45 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/08 21:59:16 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int printing(char a, char b, char c, char d, int count)
{
	if (count != 0)
	{			
		write(1, ", ", 2);
	}		
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}
void ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	int		count;

	a = '0' - 1;
	b = '0' - 1;
	c = '0' - 1;
	d = '0' - 1;
	count = 0;
	
	while (a++ < '9')
	{
		while (b++ < '9')
		{
			while (c++ < '9')
			{
				while (d++ < '9')
				{
					if (a <= c && b < d)
					{
					printing(a, b, c, d, count);
					count++;
					}
				}
				d = '0' - 1;
			}
			c = '0' - 1;
		}
		b = '0' - 1;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
