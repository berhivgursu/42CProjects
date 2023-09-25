#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	tmp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		tmp = tab[left];
		tab[left] = tab[right];
		tab[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
    int tab[]={1,3,2,5,9,6,0,7,4,8};
    int i=0;
    int size=10;
    printf("%s","dizinin son hali:");
    ft_rev_int_tab(tab,size);
    while(i<size)
    {
        printf("%d",tab[i]);
        i++;
    }
}