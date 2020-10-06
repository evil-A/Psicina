/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:44:08 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/05 15:57:56 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void ft_print_alphabet(void)
{
	char c;

	c = 'a';

	while(c >= 'a' && c <= 'z')
	{

	write(1, &c, 1);
		c++;
	}
}

int	main()
{
	ft_print_alphabet();


	return 0;
}

