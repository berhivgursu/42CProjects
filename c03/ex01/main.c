#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		while (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
int main()
{
    char s1[]="ababc";
    char s2[]="ababc";
    char s3[]="ababa";
    char s4[]="ababl";
    printf("1:%d\n",ft_strncmp(s1,s2,5));
    printf("2:%d\n",ft_strncmp(s1,s2,3));
    printf("3:%d\n",ft_strncmp(s1,s3,5));
    printf("4:%d",ft_strncmp(s3,s4,5));   
}