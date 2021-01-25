/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:52:24 by ametta            #+#    #+#             */
/*   Updated: 2021/01/25 11:51:47 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wc(char const *s, char const c)
{
	size_t	i;
	size_t	wc;

	wc = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			wc++;
			while (s[i] != c && s[i] != 0)
				i++;
		}
		else
			i++;
	}
	return (wc);
}

static char	**ft_size_words(char **output, const char *s, const char c)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		size = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != 0)
			{
				size++;
				i++;
			}
			output[j] = malloc(sizeof(char) * (size + 1));
			j++;
		}
		else
			i++;
	}
	return (output);
}

static void	ft_create_out(char **output, char const *s, char const delim)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
	    k = 0;
		if (s[i] != delim)
		{
		    while (s[i] != delim)
		    {
		        output[j][k++] = s[i++];
		    }
			output[j][k] = '\0';
			j++;
		}
		i++;
	}
}

char		**ft_split(char const *s, char c)
{
	char	**output;

	output = malloc(sizeof(char*) * (ft_wc(s, c) + 1));
	ft_size_words(output, s, c);
	ft_create_out(output, s, c);
	if (output == NULL)
		return (NULL);
	return (output);
}
