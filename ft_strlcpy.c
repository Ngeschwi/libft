/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:51:59 by ngeschwi          #+#    #+#             */
/*   Updated: 2020/08/19 21:45:07 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		boucle(char *dest, char *src, int i)
{
	if (src[i] != '\0')
	{
		dest[i] = src[i];
		return (0);
	}
	else
	{
		dest[i] = '\0';
		return (1);
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				size_src;
	int				size_dest;
	int				test;

	i = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size == 0)
		return (size_src);
	else
	{
		while (i < size - 1)
		{
			test = boucle(dest, src, i);
			if (test)
				return (size_src);
			i++;
		}
		dest[i] = '\0';
		return (size_src);
	}
}
