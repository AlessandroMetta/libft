/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 10:21:48 by ametta            #+#    #+#             */
/*   Updated: 2021/01/20 15:04:37 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*output;

	i = 0;
	while (s[i] != 0)
		i++;
	output = malloc(sizeof(char) * (i + 1));
	output[i] = '\0';
	i = 0;
	while (s[i] != 0)
	{
		output[i] = (*f)(i, s[i]);
		i++;
	}
	if (output == NULL)
		return (NULL);
	return (output);
}
