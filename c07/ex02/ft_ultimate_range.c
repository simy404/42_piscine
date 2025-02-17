/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:29:38 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/24 17:29:40 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	arr = malloc(sizeof(int) * len);
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	while (min < max)
		*arr++ = min++;
	return (len);
}
