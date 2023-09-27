#include<stdio.h>

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
    char str[]="KJWKJFCBA";
    char str1[]="sajaAHJSXBsjanjb";
    char str2[]="";
    printf("1:%d\n",ft_str_is_uppercase(str));
    printf("2:%d\n",ft_str_is_uppercase(str1));
    printf("3:%d",ft_str_is_uppercase(str2));  
}