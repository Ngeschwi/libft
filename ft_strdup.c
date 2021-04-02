/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:35:58 by ngeschwi          #+#    #+#             */
/*   Updated: 2020/08/30 13:32:57 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size_src;
	int		i;

	i = 0;
	size_src = ft_strlen(src);
	copy = malloc(sizeof(char) * (size_src + 1));
	if (copy == NULL)
		return (NULL);
	if (size_src == 0)
	{
		copy[0] = '\0';
		return (copy);
	}
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	if (size_src != 0)
		copy[i] = '\0';
	return (copy);
}
