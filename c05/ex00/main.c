#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
int main()
{
    printf("%d",ft_iterative_factorial(5));
	printf("%d",ft_iterative_factorial(-7));
	printf("%d",ft_iterative_factorial(0));
}