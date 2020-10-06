#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int ret;
	int nbr;

	i = 0;
	ret = 1;
	nbr = 0;
//	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' ||
//			 str[i] == '\t' || str[i] == '\v')
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ret = ret * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
//		printf("%d\n", nbr);
		i++;
	}
	
	nbr = nbr * ret;
	return (nbr);
}

int	main(void)
{
	char input[] = " +dsd-++-+-+654654";
	char	cosa[] = " -+-+754";
	int	number1;
	int number2;
	printf("%s\n", input);
	number1 = ft_atoi(input);
	number2 = atoi(cosa);
	printf("%d\n", number1);
	printf("%d\n", number2);
	return (0);
}

/*
 str to int
 spaces
 signs
 base 10
 overflow underflow indefinido
*/
