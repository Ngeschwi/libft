/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeschwi <ngeschwi@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:41:41 by ngeschwi          #+#    #+#             */
/*   Updated: 2020/12/15 16:52:10 by ngeschwi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_white_space(char str)
{
	if (str == '\t' || str == '\n'
			|| str == '\v' || str == '\f'
			|| str == '\r' || str == ' ')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		total;
	int		nbrless;

	nbrless = 1;
	i = 0;
	total = 0;
	while (str[i])
	{
		if (!ft_white_space(str[i]))
			break ;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nbrless = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return (total * nbrless);
}
