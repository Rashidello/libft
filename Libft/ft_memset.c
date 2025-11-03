/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:31:13 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/03 22:33:06 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int	c, size_t	len)
{
	int i;
	char *ch;
	unsigned char d;
	
	d = (unsigned char)c;
	ch = (char *)b;
	i = 0;
	while(len--)
	{
		ch[i] = d;
		i++;
	}
	return (ch);
} 
