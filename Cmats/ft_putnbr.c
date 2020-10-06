/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:31:32 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/09 18:31:37 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mod(int nb)
{
	char	mod;

	mod = (nb % 10) + '0';
	write(1, &mod, 1);
}

void	reduce(int nb)
{
	if (nb > 0)
	{
		if (nb > 10)
		{
			nb = nb / 10;
			reduce(nb);
			mod(nb + 1);
		}
		else
		{
			mod(nb);
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	reduce(nb);
}
