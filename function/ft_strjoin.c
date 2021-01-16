
#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	
	i = 0;
	j = 0;
	str = (char*)malloc((ft_strlen(s1) + (ft_strlen(s2))) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (s1[i] != 0)
		str[j++] = s1[i++];
	i = 0;
	while (s2[i] != 0)
		str[j++] = s2[i++];
	str[j] = s2[i];
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char s1[] = "bella";
	char s2[] = "ciao";
	printf("\n%s\n\n", ft_strjoin(s1, s2)); 
	return (0);
}
*/
