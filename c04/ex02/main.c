#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;
	int	i1;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		i = nb % 10 + 48;
		write(1, &i, 1);
	}
	else
	{
		i1 = nb % 10 + 48;
		write(1, &i1, 1);
	}
}

int main()
{
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-23243);
    write(1, "\n", 1);
    ft_putnbr(7);

}