/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:27:39 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/15 15:31:02 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	sum;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	sum = j + i;
	if (dstsize == 0)
		return (sum);
	if (i >= dstsize)
		return (sum);
	j = 0;
	while (dstsize > i + 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (sum);
}
