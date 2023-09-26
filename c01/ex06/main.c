#include<stdio.h>
int	ft_strlen(char *str)
{
	int	length;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
int main()
{
    char str[]="berhiv";
    printf("dizinin uzunluğu:%d",ft_strlen(str));
}