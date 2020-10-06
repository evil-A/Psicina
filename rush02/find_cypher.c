#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*find_cypher(char *s)
{
	char	*aux;
	int		len;
	int		i;

	len = strlen(s);
	aux = malloc(sizeof(s));
	i = 1;
	aux[0] = s[0];
	while (i < len)
	{
		aux[i] = '0';
		i++;
	}
	aux[i] = '\0';
//	funcion_cool;
	printf("%s\n", aux);
	free(aux);
	s++;
	if (*s)
		return (find_cypher(s));
	return (s);
}

int		main(void)
{
	char	*s;

	s = "123527";
	find_cypher(s);
	return (0);
}
