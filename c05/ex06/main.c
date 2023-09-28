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
int main()
{
    printf("%d\n",ft_is_prime(1));
    printf("%d\n",ft_is_prime(2));
    printf("%d\n",ft_is_prime(13));
    printf("%d",ft_is_prime(12));
}