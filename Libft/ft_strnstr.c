/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:00:36 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/04 17:27:41 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while(haystack[j] != '\0')
	{
		while(needle[i] != '\0' && haystack[j + i] == needle[i] && len > j + i)
			i++;
		
		if (needle[i] == '\0')
			return((char *)&haystack[j]);
		j++;
	}
	return (NULL);
}
