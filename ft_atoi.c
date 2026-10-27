/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:10:31 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/15 14:42:11 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const	char *str)
{
	int	i;
	int	nu;
	int	ng;

	i = 0;
	nu = 0;
	ng = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ng++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nu = nu * 10 + (str[i] - '0');
		i++;
	}
	if (ng == 1)
		return (nu = -nu);
	return (nu);
}
