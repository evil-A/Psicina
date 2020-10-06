/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_str_is_alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:58:43 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/11 22:25:38 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
//programa muy allterado
int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str < (sizeof(str) - 1))
	{
		if (*str < '!')
		{
			flag = flag * 0;
		}
		str++;
	}
	return (flag);
}

int	main(void)
{
	char	doubt[2];
	char	wrong[2];
	char	good[2];
	int		flag;
// esta mal la parte de imprimir variables
	doubt = "2\0";
	wrong = "\0\0";
	good = "dD";
	write(1, doubt, sizeof(doubt));
	write(1, "\n", 1);
	write(1, wrong, sizeof(wrong));
	write(1, "\n", 1);
	write(1, good, sizeof(good));
	write(1, "\n", 1);
	flag = ft_str_is_alpha(doubt);
	printf("%d\n", flag);
	flag = ft_str_is_alpha(wrong);
	printf("%d\n", flag);
	flag = ft_str_is_alpha(good);
	printf("%d\n", flag);
	return (0);
}
