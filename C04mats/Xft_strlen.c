#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char full[] = "Hellraiser";

	printf("%s\n", full);
	printf("%d", ft_strlen(full));
	return (0);
}
