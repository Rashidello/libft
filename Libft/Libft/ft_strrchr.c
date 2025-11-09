/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:11:21 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/01 20:13:05 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char ch;
	
	ch = c;
	i = 0;

	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] != ch)
			i--;
		else
			return ((char *)(s + i));
	}
	if (ch == '\0')
		return ((char *) (s + i));
	return (NULL);

}
