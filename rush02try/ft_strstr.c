/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:31:17 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/18 19:31:22 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && str[i] != '\0')
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0' && j != 0)
				return (&str[i - j]);
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}
