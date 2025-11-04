/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:43:02 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/04 14:11:34 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	ver;

	ver = (unsigned char) c;
	if ((ver >= '0' && ver <= '9') || (ver >= 'a' && ver <= 'z')
		|| (ver >= 'A' && ver <= 'Z'))
		return (1);
	return (0);
}
