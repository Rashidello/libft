/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:11:48 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/03 21:59:28 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ch;
	int		i;

	i = 0;
	ch = s;
	while (n--)
	{
		ch[i] = '\0';
		i++;
	}
}
// #include <string.h> 
// #include <stdio.h>

// int main()
// {
// 	char h[] = "hello";
// 	char o[] = "hello";

// 	bzero(h,3);
// 	ft_bzero(o,3);
// 	printf("original -->%s\n",h);
// 	printf("ft -->%s",o);	
	
// }