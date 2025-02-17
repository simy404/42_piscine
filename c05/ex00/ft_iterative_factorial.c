/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:19:27 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/21 13:19:54 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	if (nb < 0)
		return (0);
	total = 1;
	i = 1;
	while (i <= nb)
	{
		total *= i;
		i++;
	}
	return (total);
}
