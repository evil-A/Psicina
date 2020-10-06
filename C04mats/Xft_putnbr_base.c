#include <unistd.h>

void	ft_putnbr(int nb);

void	printing(int string_nb)
{
	int	mod;

	if (string_nb >= 10)
	{
		ft_putnbr(string_nb / 10);
	}
	mod = string_nb % 10 + '0';
	write(1, &mod, 1);
}

void	ft_putnbr(int nb)
{
	int	string_nb;
	int	nb1;
	int	nb2;

	if (nb == -2147483648)
	{
		nb1 = 21474;
		nb2 = 83648;
		write(1, "-", 1);
		printing(nb1);
		printing(nb2);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			string_nb = nb * -1;
		}
		else
		{
			string_nb = nb;
		}
		printing(string_nb);
	}
}

void	ft_putmbr_base(int nbr, char *base)
{
	int	string_nb;
	int	nb1;
	int ibase;

	ibase = 0;
	while (base[ibase] != '\0')
	{
		ibase++;
	}

}

/* 0123456789 nbr / ibase
 01
 0123456789ABCDEF
 poniguay
 negativos nbr < 0;
error:
base vacia o 1 ibase < 2
base caracter repetido ordenar
base + - base[ibase] == '+' || base[ibase] == '-'
*/
int		main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}


