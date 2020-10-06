#include <stdio.h>

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

int	main(void)
{
	char aux[40] = "2000";
	char *aux2;

	aux2 = aux;
	printf("%s\n", ft_break_number(aux2));

//	printf("%s\n", break_number("1000000"));
//	printf("%s\n", break_number("10000"));
//	rintf("%s\n", break_number("300000"));
//	printf("%s\n", break_number("10"));
	return (0);
}
