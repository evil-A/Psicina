#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	k = argc - 1;
	while (k > 0)
	{
		i = 0;
		while (argv[k][i] != '\0')
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k--;
	}
	return (0);
}
