/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:01:33 by ametta            #+#    #+#             */
/*   Updated: 2021/01/20 11:23:25 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_check_occ(char const *s1, char const *set)
{
	size_t	i;
	int		j;
	size_t	occ;

	occ = 0;
	i = 0;
	j = -1;
	while (s1[i] != 0)
	{
		if (s1[i] == set[j + 1])
			j++;
		else if (set[j + 1] == 0)
		{
			occ++;
			j = -1;
		}
		else if (s1[i] != set[j + 1])
			j = -1;
		i++;
	}
	return (ft_strlen(set) * occ);
}

static int	ft_control(char const *str, char const *rem, size_t c)
{
	int	j;
	int	i;

	i = c;
	j = 0;
	while (str[i] == rem[j])
	{
		i++;
		j++;
	}
	if (rem[j] == 0)
		return (i - 1);
	return (-1);
}

static void	ft_create_out(char *output, char const *s1, char const *set)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s1[i] != 0)
	{
		if (s1[i] == set[0])
		{
			if (ft_control(s1, set, i) == -1)
				output[l++] = s1[i];
			else
				i = ft_control(s1, set, i);
		}
		else if (s1[i] != set[0])
			output[l++] = s1[i];
		i++;
	}
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*output;

	if (set[0] == 0 || s1[0] == 0)
		return (NULL);
	output = (char*)malloc(ft_strlen(s1) - ft_check_occ(s1, set));
	ft_create_out(output, s1, set);
	if (output == NULL)
		return (NULL);
	return (output);
}
