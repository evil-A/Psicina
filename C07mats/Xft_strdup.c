#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	o;
	char	*dup;

	o = ft_strlen(src);
	dup = malloc(sizeof(char) * (o + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	origin[11] = "Hellraiser";
	char	*final;
	int	o;
	int f;

	final = ft_strdup(origin);
	printf("%p\n", final);
	o = ft_strlen(origin);
	f = ft_strlen(final);

	printf("String origin: '%s' (%d)\n", origin, o);
	printf("String final: '%s' (%d)\n", final, f);
	return (0);
}

