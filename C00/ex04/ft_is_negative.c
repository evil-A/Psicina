/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:32:16 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/05 17:48:32 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n)
{
	char m;
	char p;

	m = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &m, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
