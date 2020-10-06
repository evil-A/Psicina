#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void ft_find(char *str, char *prueba);
char	*find_cypher(char *number, char *str, int len2);

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
	break_number(aux);
	printf("%s\n", aux);
	free(aux);
	s++;
	if (*s)
		return (find_cypher(s));
	return (s);
}

char	*ft_hundred(char *aux)
{
	aux[1] = '0';
	aux[2] = '0';
	aux[3] = '\0';
	return (aux);
}

char	*ft_ten(char *aux)
{
//	if (aux[0] == '1') caso especial por desarrollar

	aux[1] = '0';
	aux[2] = '\0';
	return (aux);
}

char	*ft_unit(char *aux, int cy)
{
	int	i;

	i = 1;
	while (i < cy)
	{
		aux[1] = '0';
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
char	*ft_break_number(char *aux)
{
	int	cy; //cifras
	int	i;

	i = 0;
	cy = 0;
	while (aux[cy])
		cy++;
	if (aux[0] != '0')
	{
		if (cy % 3 == 0) //hundreds
		{
			ft_hundred(aux);
		}
		else if (cy % 3 == 2) //tens
		{
			ft_ten(aux);
		}
		else if (cy % 3 == 1) //units
		{
			if (cy % 6 == 1)
				ft_unit(aux, cy);
			if (cy % 6 == 4)
				ft_unit(aux, 4);
		}
	}

	return (aux);
}

char 	*ft_divide(char *number, int c, char *string)
{
	char aux[3];
	int i;
	int n;
	int len;
	int len2;


	len = strlen(number);
	len2 = len;

	i = 0;
	n = 3;
	if ((len -n) % 3 != 0)
		n--;
	while (i < n)
	{
		aux[i] = *number++;
		i++;
	}
	c++;
	aux[i]  = '\0';	

	find_cypher(aux, string, len2);	
	if (len >= n)
		return (ft_divide(number, c, string));
	return (number);
}


// Divide los numeros en unidades, decenas, centenas...
char	*find_cypher(char *number, char *str, int len2)
{
	char	aux[25];
	char	first[2];
	int		i;
	int 	cond;
	int len;
	len = strlen(number);
	i = 1;
	cond = 0;
	aux[0] = number[0];
	while (i < len2)
	{
		if (len2 == 2 && aux[0] == '1')
		{
			aux[i] = number[i];
			cond = 1;
		}
		else
			aux[i] = '0';
		i++;
	}
	aux[i] = '\0';	
	printf("%s\n", aux);


	if (len2 > 2)
	{
		first[0] = aux[0];
		first[1] = '\0';
		aux[0] = '1';
	//ft_find(str, first);
	
	}
	/*else if (len2 - len == 4)
		ft_find(str, "1000");	
	else
		ft_find(str, aux);
	*/len--;
	number++;
	if (*number && !cond)
		return (find_cypher(number, str, len2));
	return (number);
}

// Busca los valores en el diccionario y los imprime
void ft_find(char *str, char *prueba)
{
	
	int i;
	i = 0;
	char *a = strstr(str, prueba);
	if (!a)
		return;
	while (a[i] != ':')
		i++;
	i++;
	while (a[i] == ' ')
		i++;
	while (a[i] != '\n')
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, " ", 1);
}

int main()
{
	char *str;
	char *number = "19999";
	char f;
	int i;
	int file;
	int c = 0;

	i = 0;
	file = open("1309numbers.o", O_RDONLY);
	while (read(file, &f, 1) > 0)
		i++,
	close(file);	
	str = (char *)malloc(i * sizeof(char));
	file = open("1309numbers.o", O_RDONLY);
	i = 0;
	while (read(file, &f, 1) > 0)
	{
		str[i] = f;
		i++;
	}
	close(file);
	
	ft_divide(number, c, str);
	write(1, "\n", 1);
		
}
	
