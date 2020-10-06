/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:42:19 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/24 13:09:30 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*program;
	int		i;

	(void)argc;
	i = 0;
	program = argv[0];
	while (program[i] != '\0')
	{
		write(1, &program[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
