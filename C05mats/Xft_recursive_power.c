#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
	}
	return (nb);
}

int	main(void)
{
	int	number;
	int	ranger;

	number = -5;
	ranger = 3;
	printf("%d\n", ft_recursive_power(number, ranger));
	return (0);
}
