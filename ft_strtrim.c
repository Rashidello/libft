/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:28:25 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/16 17:02:18 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	bgn;
	size_t	end;
	char	*s2;

	bgn = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[bgn]) && s1[bgn] != '\0')
		bgn++;
	end = ft_strlen(s1);
	while (end > bgn && ft_strchr(set, s1[end - 1]))
		end--;
	s2 = malloc(end - bgn + 1);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, &s1[bgn], end - bgn + 1);
	return (s2);
}
