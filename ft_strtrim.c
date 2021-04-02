/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:55:27 by ngeschwi          #+#    #+#             */
/*   Updated: 2021/01/13 11:54:33 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_index_d(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		check;

	i = 0;
	j = 0;
	check = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				check = 1;
			j++;
		}
		if (check != 1)
			return (i);
		i++;
		j = 0;
		check = 0;
	}
	return (i);
}

static int		ft_index_f(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		check;

	check = 0;
	j = 0;
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				check = 1;
			j++;
		}
		if (check != 1)
			return (i);
		i--;
		j = 0;
		check = 0;
	}
	return (i);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	int		index_d;
	int		index_f;
	int		i;
	char	*s2;

	i = 0;
	index_d = ft_index_d(s1, set);
	index_f = ft_index_f(s1, set);
	if (index_f < index_d)
	{
		s2 = malloc(sizeof(char));
		s2[0] = '\0';
		return (s2);
	}
	s2 = malloc(sizeof(char) * (index_f - index_d + 2));
	if (s2 == NULL)
		return (NULL);
	while (index_d <= index_f)
	{
		s2[i] = s1[index_d];
		i++;
		index_d++;
	}
	s2[i] = '\0';
	return (s2);
}
