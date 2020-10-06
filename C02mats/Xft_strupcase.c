/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_strupcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 00:38:15 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/14 22:40:33 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char	origin[10] = "Hellraiser";

	write(1, origin, sizeof(origin));
	write(1, "\n", 1);
	ft_strupcase(origin);
	write(1, origin, sizeof(origin));
	return (0);
}
