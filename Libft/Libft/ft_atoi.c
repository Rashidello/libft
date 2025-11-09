/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:10:31 by rarayano          #+#    #+#             */
/*   Updated: 2025/11/04 15:27:40 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const	char *str)
{
	int	index;
	int	converter;
	int	negative;

	index = 0;
	converter = 0;
	negative = 0;
	while ((str[index] >= 9 && str[index] <= 13) || (str[index] == 32))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative++;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		converter = converter * 10 + (str[index] - '0');
		index++;
	}
	if (negative == 1)
		return (converter = -converter);
	return (converter);
}
