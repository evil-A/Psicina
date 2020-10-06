#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb) // < estricto

	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	full[20] = "Hell";
	char	add[] = "raiser";
	int	nb;

	nb = 4;
	ft_strncat(full, add, nb);
	printf("%s", full);
	return (0);
}
