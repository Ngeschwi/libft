/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:44:26 by ngeschwi          #+#    #+#             */
/*   Updated: 2020/12/09 16:43:32 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	lettre;

	i = 0;
	lettre = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == lettre)
			return ((char*)&s[i]);
		i++;
	}
	if (lettre == '\0')
		return ((char*)&s[i]);
	return (NULL);
}
