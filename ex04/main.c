#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	if (*b != 0)
	{
		*a = tmp / *b;
		*b = tmp % *b;
	}
}
int main()
{
    int x=20;
    int y=3;
    ft_ultimate_div_mod(&x,&y);
    printf("a:%d\n",x);
    printf("b:%d",y);
}
