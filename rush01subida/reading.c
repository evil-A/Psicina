/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:29:02 by evila-ro          #+#    #+#             */
/*   Updated: 2019/09/15 21:29:08 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	conditions(char *input, int *setting)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
/*	while (input[count1] != '\0')
	{
		if(input[count1] >= '0' && input[count1] <= '9')
		{
			setting[count2] = (input[count1] - '0');
			count2++;
		}
		count1++;
	}
*/
	if(count2 < 16)
	{
		setting[0] = -1;
	}
	count2++;
/*	while (count2 < 16)
	{
		if (setting[count2] < 1 || setting[count2] > 4)
		{
			setting[count2] = -1;
			count2++;
		}
	}
*/
	return (0);
}

int	main(int argc, char *argv[])
{
	char *input;
	int i = 0;
	int *setting;

	input = argv[1];
	conditions(input, setting);
	while(i < 16)
	{
		if (setting[i] == -1)
		{
			printf("Error\n");
			return (0);
		}
		printf("%d ", setting[i]);
		i++;
	}
	return (0);
}
