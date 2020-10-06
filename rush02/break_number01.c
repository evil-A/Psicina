#include <stdio.h>

char	*break_number(char *aux)
{
	int	nz; // numero de ceros
	int	cy; //cifras
	int	i;

	i = 0;
	cy = 0;
	while (aux[cy])
		cy++;
	nz = cy - 1;
	i++;

	if (nz % 3 == 0) //miles y millones
	{
		if (nz % 6 == 0 && nz / 6 == 0) // millones
		{
			while (nz > 0 && aux[i] != '\0')
			{
				aux[i] = 'M';
				i++;
			}
		}
		else if (nz % 3 == 0 && nz % 6 == 3) // miles
		{
			while (nz % 6 > 0 && aux[i] != '\0')
			{
				aux[i] = 'm';
				i++;
			}
		}
	}
	else if (nz % 3 == 2) // centenas
	{
		while (nz % 3) > 0 && aux[i] != '\0')
		{
			aux[i] = 'C';
			i++;
		}
	}
	else if ( nz % 3 == 1) // decenas
	{
		if (aux[i] > 1) // ty
		{
			while (nz % 3 > 0 && aux [i] != '\0')
			{
				aux[i] = 'D';
				i++;
			}
		}
		else if (aux[i] < 2) // teen
		{
			// codigo complejo
		}
	}
	else if (nz % 3 == 0 && nz % 6 == 0) // unidades
	{
		while (nz > 0 && aux[i] != '\0')
		{
			aux[i] = 'U';
			i++;
		}
	}
	aux[i] = '\0';
	return (aux);
}

int	main(void)
{
	char aux[40] = "100000000";

	printf("%s\n", break_number(aux));
//	printf("%s\n", break_number("1000000"));			
//	printf("%s\n", break_number("10000"));
//	printf("%s\n", break_number("300000"));		
//	printf("%s\n", break_number("10"));
	return (0);		
}
