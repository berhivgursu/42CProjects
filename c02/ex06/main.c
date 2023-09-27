#include<stdio.h>
int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int main()
{
    char str[]="abas-nbc!hdssc.n&?+";
    char str1[]="\n\t\v\f";
    char str2[]="";
    printf("1:%d\n",ft_str_is_printable(str));
    printf("2:%d\n",ft_str_is_printable(str1));
    printf("3:%d\n",ft_str_is_printable(str2));
}