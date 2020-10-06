/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integral02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:22:58 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/20 00:09:32 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	printing(int string_nb)
{
	int	mod;

	if (string_nb >= 10)
	{
		ft_putnbr(string_nb / 10);
	}
	mod = string_nb % 10 + '0';
	write(1, &mod, 1);
}

void	ft_putnbr(int nb)
{
	int	string_nb;
	int	nb1;
	int	nb2;

	if (nb == -2147483648)
	{
		nb1 = 21474;
		nb2 = 83648;
		write(1, "-", 1);
		printing(nb1);
		printing(nb2);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			string_nb = nb * -1;
		}
		else
		{
			string_nb = nb;
		}
		printing(string_nb);
	}
}

int		main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
