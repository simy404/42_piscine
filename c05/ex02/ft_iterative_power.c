/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:22:10 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/21 14:22:18 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	total = 1;
	i = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
