/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 22:54:31 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/22 22:55:58 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_number(char *number)
{
	int	valid;
	int i;

	i = 0;
	valid = 1;
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
			valid = valid * 1;
		else
			valid = valid * 0;
		i++;
	}
	if (number[0] == '0' && i > 1)
		valid = valid * 0;
	if (valid == 0)
		write(1, "Error\n", 6);
	return (valid);
}
