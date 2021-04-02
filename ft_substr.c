/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:44:27 by ngeschwi          #+#    #+#             */
/*   Updated: 2020/12/09 18:44:11 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sizem(unsigned int size_s, unsigned int start, size_t len)
{
	if (start > size_s)
		return (0);
	if (len > size_s)
		return ((int)size_s - start + 1);
	return ((int)len);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	size_t				i;
	unsigned int		size_s;

	size_s = ft_strlen(s) - 1;
	i = 0;
	str = malloc(sizeof(char) * (ft_sizem(size_s, start, len) + 1));
	if (str == NULL)
		return (NULL);
	if (start > size_s)
	{
		str[0] = '\0';
		return (str);
	}
	while (i < len && s[i] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
