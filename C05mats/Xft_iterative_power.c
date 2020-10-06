#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		x = nb * x;
		power--;
	}
	return (x);
}

int	main(void)
{
	int number;
	int ranger;

	number = 0;
	ranger = 0;
	printf("%d\n", ft_iterative_power(number, ranger));
	return (0);
}
