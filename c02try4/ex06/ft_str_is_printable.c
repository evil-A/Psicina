/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:31:45 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/14 22:53:20 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			flag = flag * 0;
		}
		i++;
	}
	return (flag);
}
