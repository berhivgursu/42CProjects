#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
	{
		return (1);
	}
	return (1);
}
int main()
{
    printf("%d\n",ft_recursive_power(2,4));
    printf("%d\n",ft_recursive_power(0,0));
    printf("%d\n",ft_recursive_power(2,0));
    printf("%d\n",ft_recursive_power(2,-6));
    printf("%d",ft_recursive_power(-2,2));
}