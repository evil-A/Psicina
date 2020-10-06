#include <unistd.h>

char *rev_print(char *str)
{
	int i;
	int j;
	char	*aux;
	
	aux = str;
	j = 0;
	i = 0;
	while(aux[j] != '\0')
	{
		j++;
	}
	while (j >= 0)
	{
		write(1, &str[j], 1);
		j--;
	}
	return (aux);
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("atupedsojih");
	write(1, "\n", 1);
	return (0);
}
