// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strlcpy.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/11/02 13:40:18 by rarayano          #+#    #+#             */
// /*   Updated: 2025/11/03 18:48:01 by rarayano         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;


	i = 0;
	j = 0;
	while(src[i] != '\0')
		i++;
	if (dstsize > 0)
	{
		while(j < dstsize - 1 && src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);

}
