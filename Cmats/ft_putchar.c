/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:14:27 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/05 15:33:32 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char c, b;

	c = 'H';
	b = 'X';
	ft_putchar(c);
	ft_putchar(b);
	return 0;
}
