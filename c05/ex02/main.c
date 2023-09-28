#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
int main()
{
    printf("%d\n",ft_iterative_power(2,4));
    printf("%d\n",ft_iterative_power(0,0));
    printf("%d",ft_iterative_power(2,0));
    printf("%d\n",ft_iterative_power(2,-6));
    printf("%d",ft_iterative_power(-2,2));
}
