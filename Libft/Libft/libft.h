/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:58:36 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/01 21:14:29 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int ft_toupper(int c);
int ft_tolower(int c);
int	ft_isalnum(int c);
size_t	ft_strlen(const char *s);
int	ft_atoi(const	char *h);
int	ft_strncmp(const char *s1, const char *s2,size_t n);
char	*ft_strdup(const char *s);

