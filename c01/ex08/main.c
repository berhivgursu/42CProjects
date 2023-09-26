#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	sorted;

	i = 0;
	while (i < (size - 1))
	{
		if (tab [i] > tab [i +1])
		{
			tmp = tab[i];
			tab[i] = tab[i +1];
			tab[i +1] = tmp;
		}
		i++;
	}
	sorted = 1;
	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
			sorted = 0;
		i++;
	}
	if (sorted == 0)
		ft_sort_int_tab (tab, size);
}
int main()
{
    int tab[]={1,3,2,5,9,6,0,7,4,8};
    int i=0;
    int size=10;
    printf("%s","dizinin son hali:");
    ft_sort_int_tab(tab,size);
     while(i<size)
    {
        printf("%d",tab[i]);
        i++;
    }
}