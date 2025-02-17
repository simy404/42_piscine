/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:hsamir <hsamir@student.42kocaeli.com.tr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:02:29 by marvin            #+#    #+#             */
/*   Updated: 2024/07/09 20:35:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_i;

	i = 0;
	while (i < size)
	{
		min_i = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_i])
				min_i = j;
			j++;
		}
		if (min_i != i)
		{
			ft_swap(&tab[min_i], &tab[i]);
		}
		i++;
	}
}
