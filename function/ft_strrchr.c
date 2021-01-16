/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:49:11 by ametta            #+#    #+#             */
/*   Updated: 2021/01/14 11:27:24 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		p;

	i = 0;
	p = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = i;
		i++;
	}
	if (p == -1)
		return (NULL);
	return ((char*)s + p);
}