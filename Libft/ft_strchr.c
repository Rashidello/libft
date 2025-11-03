/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:52:01 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/01 20:13:09 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char ch;

	ch = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ch)
			i++;
		else
			return ((char *) (s + i));
	}
	if (ch == '\0')
		return ((char *) (&s[i]));
	return (0);
}
