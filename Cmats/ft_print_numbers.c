/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:03:27 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/05 18:38:34 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void	ft_print_numbers(void)
{
	char x;

	x = '0';

	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}

int main()
{
	ft_print_numbers();



	return 0;
}
