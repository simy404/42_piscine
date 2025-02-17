/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:17:05 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/22 15:17:07 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(int *qcase, int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if ((i + qcase[i] == x + y)
			|| (i - qcase[i] == x - y) || (y == qcase[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_table(int *qcase)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(qcase[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

int	ft_qcase_found(int *qcase, int x)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (i <= 9)
	{
		if (is_valid(qcase, x, i))
		{
			if (x != 9)
			{
				qcase[x] = i;
				counter += ft_qcase_found(qcase, x + 1);
			}
			else
			{
				counter += 1;
				qcase[x] = i;
				print_table(qcase);
			}
		}
		i++;
	}
	return (counter);
}

int	ft_ten_queens_puzzle(void)
{
	int	table[10];

	return (ft_qcase_found(table, 0));
}
