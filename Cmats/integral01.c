/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integral01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:57:55 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/09 16:22:11 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(int num_char)
{
	char	digit;
	digit = num_char + '0';
	write(1, &digit, 1);
}

int	set_sign(nb)
{
	char	sign;

	sign = 'P';
	if (nb < 0)
	{
		write(1, "-", 1);
		sign = 'N';
	}
		return (sign);
}

int	neg_to_pos(nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
	}
	return (nb);
}

int convert(nb)
{
	 int	zero;
	 int	div;
	 div = 1000000000000;
	 zero = 0;
	 while (nb > 0)
	{
		if (nb / div > 0)
		{
			zero = 1;
			ft_putchar(nb / div);
		}
		div = div / 10;
	}
}

void	ft_putnbr(int nb)
{
	char	nc;
	char	dn;
	char	un;
	char	sign;
	int	np;


	sign = set_sign(nb);
	nb = neg_to_pos(nb);
	convert(nb);
	write(1, &sign, 1);
	printf("%d", sizeof(nb));
}

int	main()
{
	int	nb;

	nb = -12;
	ft_putnbr(nb);
}
