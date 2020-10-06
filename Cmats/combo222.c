/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo222.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:41:35 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/09 01:26:30 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(int a, int b, int count)
{
	char	da;
	char	db;
	char	ua;
	char	ub;

	da = (a / 10) + '0';
	db = (b / 10) + '0';
	ua = (a % 10) + '0';
	ub = (b % 10) + '0'; 
	if (a < b)
	{
		if (count != 0)
		{
			write(1, ", ", 2);
		}
		write(1, &da, sizeof(da));
		write(1, &ua, sizeof(ua));
		write(1, " ", 1);
		write(1, &db, sizeof(db));
		write(1, &ub, sizeof(ua));
	}	
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	count;

	a = - 1;
	b = - 1;
	count = 0;

	while(a++ < 99)
	{
		while(b++ < 99)
		{
			if (a < b)
			{
			printing(a, b, count);
			count++;
			}	
		}
		b = 0;
	}
}

int	main()
{
	ft_print_comb2();
	return 0;
}
