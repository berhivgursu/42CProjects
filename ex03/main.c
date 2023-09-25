#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
int main()
{
    int x=20;
    int y=3;
    int div_result;
    int mod_result;
    ft_div_mod(x,y,&div_result,&mod_result);
    printf("a'nın b'ye bölümü:%d\n",div_result);
    printf("a'nın b'ye bölümünden kalan:%d",mod_result);
}

