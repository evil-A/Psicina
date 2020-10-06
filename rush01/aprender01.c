#include <stdio.h>

void	conditions(char *input, int *setting)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (input[count1] != '\0')
	{
		if (input[count1] >= '0' && input[count1] <= '9')
		{
			setting[count2] = input[count1] - '0';
			count2++;
		}
		count1++;
	}
	if (count2 < 16)
		setting[0] = -1;

	count2 = 0;
	while (count2 < 16)
	{
		if (setting[count2] < 1 || setting[count2] > 4)
		{
			setting[count2] = -1;
			count2++;
		}
	}	
}

int	main(int argc, char *argv[])
{
	char *input;
	int i = 0;
	int *setting;

	input = argv[1];
	conditions(input, setting);
	while (i < 16)
	{

		if (setting[i] == -1)
		{
			printf("Error: wrong input.\n");
			return (0);
		}

		printf("%d", setting[i]);
		i++;
	}
	return (0);
}
