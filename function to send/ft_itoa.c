#include "libft.h"
#include <stdlib.h>

static int	ft_digit(int n)
{
	int	digit;

	digit = 0;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static char	*ft_isneg(int n)
{
	char	*str;
	int i;

	n *= -1;
	i = ft_digit(n) + 1;
	str = (char*)malloc(i * sizeof(char));
	while (i-- > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
	}
	str[0] = '-';
	if (str == 0)
		return (NULL);
	return (str);
}

static char	*ft_ispos(int n)
{
	char	*str;
	int i;

	i = ft_digit(n);
	str = (char*)malloc(i * sizeof(char));
	while (i-- >= 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
	}
	if (str == 0)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	if (n < 0)
	{
		return (ft_isneg(n));
	}
	else if (n > 0)
	{
		return (ft_ispos(n));
	}
	else
	{
		return (NULL);
	}
}

/*
#include <stdio.h>
int	main()
{
	int n = -123456;
	printf("dal numero:	%d", n);
	printf("\nalla stringa:	\"%s\"", ft_itoa(n));
	return (0);
}
*/
