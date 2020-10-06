#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		len;
	int		i;
	int		j;
	int		k;

	cat = malloc(sizeof(char *));
	if (size == 0)
		return (cat);
	i = 0;
	len = 0;
	while (i < size)
	{
		printf("%s\n", strs[i]);
		len = len + ft_strlen(strs[i]);
		printf("%d\n", len);
		i++;
	}
	cat = malloc(sizeof(char) * 800);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			cat[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (j < ft_strlen(sep))
		{
			cat[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	cat[k] = '\0';
	printf("%s\n", cat);
	return (cat);
}
int        main(void)
{
   char **a;
   char *s;
   int size = 5;
   a = malloc(500);
   a[0] = "Esta es la primera linea";
   a[1] = "Esta es la segunda linea";
   a[2] = "Esta es la tercera linea";
   a[3] = "Esta es la cuarta linea";
   a[4] = "Esta es la quinta linea";
   s = malloc(20);
   s = "\t";
   printf("%s\n", ft_strjoin(size, a, s));
   return (0);
}
