/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:12:28 by marvin            #+#    #+#             */
/*   Updated: 2025/02/17 09:41:31 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	l;
	int	r;

	l = 0;
	while (l <= 98)
	{
		r = l + 1;
		while (r <= 99)
		{
			ft_putchar(l / 10 + '0');
			ft_putchar(l % 10 + '0');
			ft_putchar(' ');
			ft_putchar(r / 10 + '0');
			ft_putchar(r % 10 + '0');
			if (l != 98)
				write(1, ", ", 2);
			r++;
		}
		l++;
	}
}
