#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	validate(char buffer)
{
	return (1);
}
int	main()
{
	int		bytes;
	char	*buffer;
	char	*string;
	int		c, v;
	int		i = 0;
	int		max = 200;
	int		file = open("test.txt", O_RDONLY);

	buffer = (char *)malloc(max * sizeof(char));
	string = (char *)malloc(200 * sizeof(char));

	while ((bytes = read(file, &buffer, 1) > 0))
	{
		v = validate(buffer[i]);
//		printf("%d ", i);
		if (i >= (v - 1))
			write(1, &buffer, 1);
//		string[i] = buffer[i];
//		write(1, &string, 1);
/*		if (buffer[i] == '5')
		{
			c = i;
			while (buffer[c] != '\n')
			{
				write(1, &buffer, 1);
			}
		}*/
		i++;
	}
//	printf("\nBUFFER:\n%s", buffer);
//	printf("\nSTRING:\n%s", string);
	return (0);
}
