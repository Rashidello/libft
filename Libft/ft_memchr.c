/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:45:42 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/04 18:01:15 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *ch;

	i = 0;
	ch = (const unsigned char *)s;
	while(i < n)
	{
		if (*ch == c)
			return((void *)ch);
		ch++;
		i++;
	}
	return (NULL);
}
