#include <unistd.h>
#include <stdio.h>

int	ft_valid_number(char *number)
{
	int	valid;
	int i;

	i = 0;
	valid = 1;
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
			valid = valid * 1;
		else
			valid = valid * 0;
		i++;
	}
	if (number[0] == '0' && i > 1)
		valid = valid * 0;
	if (valid == 0)
		write(1, "Error\n", 6);
	return (valid);
}

int	main(void)
{
	char aux[40] = "2000000";
	char *aux2;

	aux2 = aux;
	printf("%d\n", ft_valid_number(aux2));
	printf("%d\n", ft_valid_number("3T/6"));
	return (0);
}

