#include <stdio.h>

int	main(void)
{
	int	i;
	int cy;
	char	*number;
	char	*aux;

	i = 0;
	number = "1527";
	while (number[cy] != '\0')
	{
		printf("%c\n", number[i]);
		cy++;
	}
//	printf("%d\n", number[0] -  '0');
	aux[i] = number[i];
//	printf("%c\n", aux[i]);
	if ((cy % 6) > 0)
	{
		printf("%d", (cy % 6) - 1);
	}

	return (0);
}

/*
 #include <stdio.h>

int	main(void)
{
	int	i;
	int cy;
	char	*number;
//	char	*aux;

	i = 0;
	number = "1000";
	while (number[i] != '\0')
		cy++;
	printf("%c\n", number[i]);
//	i++;
//	printf("%d\n", number[0] - '0');
	if (cy % 6 > 0)
	{
		printf("%d", cy);
	}

//	return (0);
}
*/
