#include<stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
    char s1[]="ababc";
    char s2[]="ababc";
    char s3[]="ababa";
    char s4[]="ababl";
    printf("1:%d\n",ft_strcmp(s1,s2));
    printf("2:%d\n",ft_strcmp(s1,s3));
    printf("3:%d",ft_strcmp(s3,s4));
}