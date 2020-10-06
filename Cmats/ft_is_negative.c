/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:32:16 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/06 00:26:02 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void	ft_is_negative(int n)
{
	char m;
	char p;

	m = 'N';
	p = 'P';

	if(n < 0)
	{
		write(1, &m, 1);
	}
	else
	{
		write(1, &p, 1);
	}

}

int main()
{
	int a, b, c, d;
	a = -3;
	b = 0;
	c = 1;
	d = 24;
	
	ft_is_negative(a);
	ft_is_negative(b);
	ft_is_negative(c);
	ft_is_negative(d);

	return 0;
}
