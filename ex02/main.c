#include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
    int x=5;
    int y=10;
    printf("x'in ilk değeri:%d\ny'nin ilk değeri:%d\n",x,y);
    ft_swap(&x,&y);
    printf("x'in son değeri:%d\ny'nin son değeri:%d",x,y);
}