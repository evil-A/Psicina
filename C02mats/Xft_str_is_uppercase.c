/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_str_is_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:10:45 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/14 22:22:44 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'z')
		{
			flag = flag * 0;
		}
		str++;
	}
	return (flag);
}

int	main(void)
{
	char	*doubt;
	char	*wrong;
	char	*good;
	int		flag;
// esta mal la parte de imprimir variables
	doubt = "aA@1";
	wrong = "k2@l";
	good = "KVIF";
	write(1, doubt, sizeof(doubt));
	write(1, "\n", 1);
	write(1, wrong, sizeof(wrong));
	write(1, "\n", 1);
	write(1, good, sizeof(good));
	write(1, "\n", 1);
	flag = ft_str_is_lowercase(doubt);
	printf("%d\n", flag);
	flag = ft_str_is_lowercase(wrong);
	printf("%d\n", flag);
	flag = ft_str_is_lowercase(good);
	printf("%d\n", flag);
	return (0);
}
