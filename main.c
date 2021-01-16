/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:40:47 by ametta            #+#    #+#             */
/*   Updated: 2021/01/13 14:37:33 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./function/libft.h"
/*
void	m_bzero()
{
	char str[] = "ciao come stai?";
	int n = 3;
	printf("before: %s", str);
	ft_bzero(str, n);
	printf("\nafter: %s", str);
}

void	m_strrchr()
{
	char str[] = "?ciao, come stai?";
	printf("before: %s", str);
	printf("\nafter: %s", ft_strrchr(str, '1'));
}
*/
void	m_sstrnstr()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	printf("%s", strnstr(largestring, smallstring, 4));
}

int	main()
{
	m_sstrnstr();
	return 0;
}
