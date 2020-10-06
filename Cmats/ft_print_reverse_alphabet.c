/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:43:41 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/05 18:42:27 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';

	while	(c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();

	return 0;
}
