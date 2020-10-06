/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_strncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:04:12 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/17 18:18:39 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char	origin[] = "Hellraiser";
	char	destiny[20];
	int		len;

	len = 12;
	write(1, origin, sizeof(origin));
	write(1, "\n", 1);
	ft_strncpy(&destiny[0], &origin[0], len);
	write(1, destiny, sizeof(destiny));
	return (0);
}
