/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_righ_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 22:56:56 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/22 22:58:49 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_input(int argc, char **argv, char *dict, char *value)
{
	if (argc > 3 || argc < 2)
		write(1, "Error\n", 6);
	if (argc == 2)
		ft_strcpy(value, argv[1]);
	else if (argc == 3)
	{
		value = ft_strcpy(value, argv[2]);
		dict = ft_strcpy(dict, argv[1]);
	}
}

int		main(int argc, char **argv)
{
	char	*dict;
	char	*value;

	value = malloc(50 * sizeof(char));
	dict = malloc(30 * sizeof(char));
	ft_input(argc, argv, dict, value);
	free(value);// final de programa quitar comentario
	free(dict);
	return (0);
}
