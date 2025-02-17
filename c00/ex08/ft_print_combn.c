/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:00:49 by marvin            #+#    #+#             */
/*   Updated: 2024/07/07 14:13:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_cmp(int d_index, char *arr, int max, int s_num);

void	ft_print_combn(int n)
{
	char	arr[10];

	if (n > 9 || n < 1)
		return ;
	write_cmp(0, arr, 9 - n + 1, 0);
}

void	write_cmp(int d_index, char *arr, int max, int s_num)
{
	while (s_num <= max)
	{
		arr[d_index] = s_num + '0';
		if (max == 9)
		{
			write(1, arr, (d_index + 1));
			if (arr[0] != '9' - d_index)
			{
				write(1, ", ", 2);
			}
		}
		else
			write_cmp(d_index + 1, arr, max + 1, s_num + 1);
		s_num++;
	}
}
