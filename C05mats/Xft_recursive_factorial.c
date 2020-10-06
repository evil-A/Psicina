#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		nb = 1;
	else if (nb < 0)
		return (0);
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

int	main(void)
{
	int	number;
	int	factor_x;

	number = 5;
	factor_x = ft_recursive_factorial(number);
	printf("%d\n", factor_x);
	return (0);
}
