/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integral00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 02:38:01 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/09 13:57:07 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		nb = nb * -1;
	}
	return (nb);
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
	dn = (nb / 10) + '0';
	nc = (nb % 10) + '0';
	write(1, &dn, 1);
	write(1, &un, 1);
	write(1, &sign, 1);
	
}

int	main()
{
	int	nb;

	nb = -12;
	ft_putnbr(nb);
}
