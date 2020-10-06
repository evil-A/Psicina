#include <stdio.h>

typedef struct	s_point
{
	int	x;
	int	y;
	char	*name;
}	t_point;

int	main(void)
{
	t_point	tab[3];
	int i;

	printf("%lu %lu\n", sizeof(i), sizeof(tab[0]));
	return (0);
}
