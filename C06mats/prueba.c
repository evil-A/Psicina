#include <unistd.h>

int		ft_strcmp2(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		ft_putchar(str[l]);
		l++;
	}
}

int		showtime(int argc, char **argv)
{
	int	i;
	int	k;

	k = 1;
	while (k < argc)
	{
		i = 0;
		ft_putstr(&argv[k][i]);
		ft_putchar('\n');
		k++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i++ < (argc - 1))
	{
		if (i + 1 < argc && ft_strcmp2(argv[i + 1], argv[i]) < 0)
		{
			argv[argc + 1] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[argc + 1];
			i = 0;
		}
	}
	showtime(argc, argv);
	return (0);
}
