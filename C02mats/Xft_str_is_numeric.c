/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:59:50 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/11 21:04:24 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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
	char	doubt1[4444] = "0907";
	char	wrong1[4] = "(/&%";
	char	good1[4] = "AZaz";
	int		flag;
// esta mal la parte de imprimir variables
	doubt = doubt1;
	wrong = wrong1;
	good = good1;
	write(1, doubt, sizeof(doubt));
	write(1, "\n", 1);
	write(1, wrong, sizeof(wrong));
	write(1, "\n", 1);
	write(1, good, sizeof(good));
	write(1, "\n", 1);
	flag = ft_str_is_numeric(doubt);
	printf("%d\n", flag);
	flag = ft_str_is_numeric(wrong);
	printf("%d\n", flag);
	flag = ft_str_is_numeric(good);
	printf("%d\n", flag);
	return (0);
}
