/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:27:22 by ngeschwi          #+#    #+#             */
/*   Updated: 2021/01/13 14:11:13 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	c_cast;

	c_cast = (unsigned char)c;
	i = 0;
	j = 0;
	if (src == 0 && dst == 0)
		return (NULL);
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == c_cast)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
