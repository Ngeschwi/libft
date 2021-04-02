/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:27:45 by ngeschwi          #+#    #+#             */
/*   Updated: 2020/12/09 15:33:10 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char		*s;
	size_t		i;

	i = 0;
	s = (char*)str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
