/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:04:24 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/16 14:26:45 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			fun_len;
	char			*ss;

	i = ft_strlen(s);
	if (i < start)
	{
		ss = malloc(1);
		if (!ss)
			return (NULL);
		ss[0] = '\0';
		return (ss);
	}
	if (i - start < len)
		fun_len = i - start + 1;
	else
		fun_len = len + 1;
	ss = malloc (fun_len);
	if (!ss)
		return (NULL);
	i = 0;
	while (i < fun_len - 1)
		ss[i++] = s[start++];
	ss[i] = '\0';
	return (ss);
}
