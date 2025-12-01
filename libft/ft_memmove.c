/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:42:02 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/15 20:53:30 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;

	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	if (dst_str == src_str)
		return (dst_str);
	if ((dst_str > src_str) && (dst_str < src_str + len))
	{
		while (len > 0)
		{
			len--;
			dst_str[len] = src_str[len];
		}
	}
	else
		ft_memcpy (dst_str, src_str, len);
	return (dst_str);
}
