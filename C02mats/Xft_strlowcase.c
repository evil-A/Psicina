/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_strlowcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:57:14 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/12 13:59:47 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		else
		{
			*str = *str;
		}
		str++;
	}
	*str = '\0';
	return (str);
}

int	main(void)
{
	char	origin[10] = "Hellraiser";

	write(1, origin, sizeof(origin));
	write(1, "\n", 1);
	ft_strupcase(origin);
	write(1, origin, sizeof(origin));
	return (0);
}
