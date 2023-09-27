#include<stdio.h>
int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
int main()
{
    char str[]="017212777128";
    char str1[]="abc1evffd";
    char str2[]="";
    printf("1:%d\n",ft_str_is_numeric(str));
    printf("2:%d\n",ft_str_is_numeric(str1));
    printf("3:%d",ft_str_is_numeric(str2));  
}