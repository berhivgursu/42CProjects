#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	else if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (result);
}
int main()
{
    printf("%d",ft_recursive_factorial(6));
	printf("%d",ft_recursive_factorial(-4));
	printf("%d",ft_recursive_factorial(0));
}