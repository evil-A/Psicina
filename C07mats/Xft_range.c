#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		tab = malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}

int	main(void)
{
	int *table;
	int	i;

	i = 0;
	table = ft_range(3, 7);
	while (table[i])
	{
		printf("%d ", table[i]);
		i++;
	}
	return (0);
}

// puntero nulo, max excluded
