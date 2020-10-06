#include <stdio.h>
/*
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	resize;

	i = 0;
	j = 0;
	resize = size;
	while (dest[i] != '\0')
		++i;
	if (size <= i)
		return (i);
	size -= i;
	while (src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		++i;
		++j;
		++resize;
	}
	dest[j] = '\0';
	while (j++ < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (resize);
}*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res;

	a = 0;
	while (dest[a] != '\0')
		++a;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (size <= a)
		res += size;
	else
		res += a;
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (res);
}

int	main(void)
{
	unsigned int siz;
	char	full[20] = "Hellraiser";
	char	add[] = "raiser";

	siz = 12;
	printf("%d\n", ft_strlcat(full, add, siz));
	printf("%s\n", full);
	return (0);
}
