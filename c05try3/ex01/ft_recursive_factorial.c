/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:12:08 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/23 14:12:13 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		nb = 1;
	else if (nb < 0)
		return (0);
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
