#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (nb / a >= a)
	{
		if (!(nb % a))
		{
			return (0);
		}
		else
		{
			a += 1;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	else if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (ft_is_prime(nb) == 0)
	{
		if (ft_is_prime(nb + 1) == 1)
		{
			return (nb + 1);
		}
		else
		{
			nb++;
		}
	}
	return (nb);
}
int main()
{
    printf("%d\n",ft_find_next_prime(-3));
    printf("%d\n",ft_find_next_prime(2));
    printf("%d",ft_find_next_prime(12));
}