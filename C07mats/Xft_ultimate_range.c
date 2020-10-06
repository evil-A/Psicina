#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else
	{
		tab = malloc(sizeof(int) * (max - 8));
		if (tab == NULL)
			return (-1);
		range[0] = tab;
		while (min < max)
		{
			range[0][i] = min;
			min++;
			i++;
		}
	}
	return (i);
}

int	main(void)
{
	int **table;
	int	i;
	int	size;

	i = 0;
	table = malloc(sizeof(int *));
	size = ft_ultimate_range(table, 3, 7);
	while (table[0][i])
	{
		printf("%d ", table[0][i]);
		i++;
	}
	printf("\n%d", size);
	free(table[0]);
	free(table);
	return (0);
}
