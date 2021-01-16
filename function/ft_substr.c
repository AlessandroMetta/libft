/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:02:57 by ametta            #+#    #+#             */
/*   Updated: 2021/01/14 17:24:59 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if ((ft_strlen(s) - start) < 0)
		return (NULL);
	if (len >= (ft_strlen(s) - start))
		sub = (char*)malloc((ft_strlen(s) - start) * sizeof(char));
	else if (len < (ft_strlen(s) - start))
		sub = (char*)malloc(len * sizeof(char));	
	while (i < len && s[start] != 0)
		sub[i++] = s[start++];
	if (sub == NULL)
		return (NULL);
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "ciao";
	printf("\nstringa originale:	%s\n\nsub-stringa: 		%s\n\n", s, ft_substr(s, 5, 4));
	return 0;
}
*/
