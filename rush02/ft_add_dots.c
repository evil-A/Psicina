#include <stdio.h>

char	*ft_add_dots(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = ':';
	i++;
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	full[] = "Hell";

	ft_add_dots(full);
	printf("%s", full);
	return (0);
}
