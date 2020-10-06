#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && str[i] != '\0')
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0' && j != 0)
				return (&str[i - j]);
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char full[40] = "El sufrimiento, el dulce sufrimiento";
	char piece[] = "El sufrimiento, el dulce sufrimiento";

	printf("%s\n", ft_strstr(full, piece));
	return (0);
}
