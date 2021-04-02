/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:58:43 by ngeschwi          #+#    #+#             */
/*   Updated: 2021/01/13 15:55:20 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check(const char *str, const char *c, size_t i, size_t len)
{
	int			compt;
	int			j;
	int			size_c;

	size_c = ft_strlen(c);
	j = 0;
	compt = 0;
	while (i < len && str[i] != '\0')
	{
		if (str[i] != c[j])
			return (0);
		compt++;
		if (compt == size_c)
			return (1);
		i++;
		j++;
	}
	return (0);
}

char			*ft_strnstr(const char *str, const char *c, size_t len)
{
	size_t		i;
	int			size_c;

	i = 0;
	size_c = ft_strlen(c);
	if (size_c <= 0)
		return ((char*)str);
	while (i < len && str[i] != '\0')
	{
		if (ft_check(str, c, i, len))
			return ((char*)&str[i]);
		i++;
	}
	return (0);
}
