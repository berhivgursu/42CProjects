#include<stdio.h>
int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
    char str[]="abnakjsajsbj";
    char str1[]="sajaAHJSXBsjanjb";
    char str2[]="";
    printf("1:%d\n",ft_str_is_lowercase(str));
    printf("2:%d\n",ft_str_is_lowercase(str1));
    printf("3:%d",ft_str_is_lowercase(str2));  
}