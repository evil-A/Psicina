#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1)
		return (0);
	div = 2;
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return(1);
}

int	main(void)
{
	int	number;

	number = 3;
	printf("%d\n", ft_is_prime(-2923));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(7853));
	printf("%d\n", ft_is_prime(number));
	return (0);
}
