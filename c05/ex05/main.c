#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (guess <= nb / 2)
	{
		if (nb == guess * guess && guess <= 46341)
		{
			return (guess);
		}
		guess++;
	}
	return (0);
}
int main()
{
    printf("%d\n",ft_sqrt(2147395600));
    printf("%d\n",ft_sqrt(2147483647));
    printf("%d\n",ft_sqrt(25));
    printf("%d\n",ft_sqrt(99));
    printf("%d\n",ft_sqrt(-6));
    printf("%d",ft_sqrt(1));
}