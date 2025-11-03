/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:10:31 by rarayano          #+#    #+#             */
/*   Updated: 2025/10/28 14:50:29 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const	char *h)
{
	int	index;
	int	converter;
	int	negative;

	index = 0;
	converter = 0;
	negative = 0;
	while ((h[index] >= 9 && h[index] < 13) || (h[index] == 32))
		index++;
	if (h[index] == '-' || h[index] == '+')
	{
		if (h[index] == '-')
			negative++;
		index++;
	}
	while (h[index] >= 48 && h[index] <= 57)
	{
		converter = converter * 10 + (h[index] - '0');
		index++;
	}
	if (negative == 1)
		return (converter = -converter);
	return (converter);
}
