#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root * root != nb && root <= nb / 2 && root < 46340)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}

int	main(void)
{
	int	number;

	number = 25;
	printf("%d\n", ft_sqrt(number));
	return (0);
}
