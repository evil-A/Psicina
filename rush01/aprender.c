#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Has olvidado tu nombre, hijoputas.\n");
		return (0);
	}
	printf("Que te foken, %s", argv[1]);
	return (0);
}
