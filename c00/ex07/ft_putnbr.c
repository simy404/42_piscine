/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:46:45 by marvin            #+#    #+#             */
/*   Updated: 2025/02/17 09:41:38 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (-2147483648 == nb)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -1 * nb;
		ft_putchar('-');
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
