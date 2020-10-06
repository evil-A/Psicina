#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*program;
	int		i;

	(void)argc;
	i = 0;
	program = argv[0];
	while (program[i] != '\0')
	{
		write(1, &program[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
