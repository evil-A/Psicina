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
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	div;

	if (nb <= 2)
		return (2);
	div = 2;
	while (ft_is_prime(nb) == 0 && nb < 2147483647)
	{
		nb++;
	}
	return (nb);
}

int	main(void)
{
	int	number;

	number = 2147483647;
	printf("%d\n", ft_find_next_prime(2147483643));
	printf("%d\n", ft_find_next_prime(24064));
	printf("%d\n", ft_find_next_prime(272391));
	printf("%d\n", ft_find_next_prime(143409));
	printf("%d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(number));
	return (0);
}
