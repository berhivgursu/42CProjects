#include<stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*tmp;

	tmp = str;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*tmp)
	{
		i = 0;
		if (*tmp == to_find[0])
		{
			while (tmp[i] == to_find[i] && to_find[i])
			{
				i++;
			}
			if (to_find[i] == '\0')
			{
				return (tmp);
			}
		}
		tmp++;
	}
	return (0);
}
int main()
{
    char str[]="Bugun hava nasil";
    char to_find[]="hava";
    printf("%s",ft_strstr(str,to_find));
}