#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int main()
{
    printf("%d\n",ft_fibonacci(-5));
    printf("%d\n",ft_fibonacci(0));
    printf("%d",ft_fibonacci(7));
}