/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:24:17 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/15 21:37:40 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	if (count > 0 && size > 0)
	{
		total = count * size;
		if (total / size != count)
			return (NULL);
	}
	else
		total = 0;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, total);
	return (ptr);
}
