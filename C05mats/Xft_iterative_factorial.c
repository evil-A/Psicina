#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			x = x * i;
			i++;
		}
	}
	return (x);
}

int	main(void)
{
	int	number;
	int	factor_x;

	number = 15;
	factor_x = ft_iterative_factorial(number);
	printf("%d\n", factor_x);
	return (0);
}
