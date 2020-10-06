/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 01:36:04 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/12 22:52:04 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}

int	main(void)
{
	char	origin[10] = "Hellraiser";
	char	destiny[10];

	write(1, origin, sizeof(origin));
	write(1, "\n", 1);
	ft_strcpy(destiny, origin);
	write(1, destiny, 10);
	return (0);
}
