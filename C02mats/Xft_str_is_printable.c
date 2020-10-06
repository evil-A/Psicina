/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_str_is_alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:58:43 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/14 22:29:54 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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
	doubt = "2\x7f";
	wrong = "\x7f";
	good = "dD1@$";
	write(1, doubt, sizeof(doubt));
	write(1, "\n", 1);
	write(1, wrong, sizeof(wrong));
	write(1, "\n", 1);
	write(1, good, sizeof(good));
	write(1, "\n", 1);
	flag = ft_str_is_printable(doubt);
	printf("%d\n", flag);
	flag = ft_str_is_printable(wrong);
	printf("%d\n", flag);
	flag = ft_str_is_printable(good);
	printf("%d\n", flag);
	return (0);
}
