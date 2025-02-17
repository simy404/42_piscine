/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:31:26 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/24 12:31:27 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	*arr_temp;

	if (min >= max)
		return ((void *)0);
	arr = malloc(sizeof(int) * (max - min));
	arr_temp = arr;
	if (!arr)
		return ((void *)0);
	while (min < max)
		*arr++ = min++;
	return (arr_temp);
}
