#include<stdio.h>
int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
int main()
{
    char str[]="abcd";
    char str1[]="abc1evffd";
    char str2[]="";
    printf("1:%d\n",ft_str_is_alpha(str));
    printf("2:%d\n",ft_str_is_alpha(str1));
    printf("3:%d",ft_str_is_alpha(str2));  
}