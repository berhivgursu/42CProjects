#include<stdio.h>
int	srcsize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = srcsize (src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
int main()
{
    char dest[]="Hello";
    char src[]="World!";
    printf("%d\n%s",ft_strlcpy(dest,src,11));
}