/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Xft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:59:50 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/11 21:07:37 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
