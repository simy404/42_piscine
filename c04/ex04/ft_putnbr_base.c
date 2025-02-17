/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:09:29 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/18 18:09:31 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	is_legit_base(char *str)
{
	int	i;
	int	j;
	int	x;

	x = get_len(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < get_len(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (!is_legit_base(base))
		return ;
	if (nb < 0)
	{
		nb = -1 * nb;
		ft_putchar('-');
	}
	if (nb < get_len(base))
	{
		ft_putchar(base[nb % get_len(base)]);
		return ;
	}
	ft_putnbr_base(nb / get_len(base), base);
	ft_putchar(base[nb % get_len(base)]);
}
