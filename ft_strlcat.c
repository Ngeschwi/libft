/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 10:14:09 by ngeschwi          #+#    #+#             */
/*   Updated: 2021/01/13 13:01:12 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			size_dest;
	size_t			size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size_dest >= size)
		return (size_src + size);
	while (src[i] != '\0' && i < (size - size_dest - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_src + ft_min(size, size_dest));
}
