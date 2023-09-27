#include<stdio.h>
unsigned int	srcsize(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	destlen = i;
	srclen = srcsize (src);
	if (size == 0 || size <= destlen)
	{
		return (srclen + size);
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}
int main()
{
    char dest[]="42 ";
    char src[]="C Piscine";
    printf("%d\n",ft_strlcat(dest,src,7));
    printf("%s",dest);
}