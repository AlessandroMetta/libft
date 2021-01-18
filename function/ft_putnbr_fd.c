#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}

/*
int	main()
{
	ft_putnbr_fd(-4321, 1);
}
*/
