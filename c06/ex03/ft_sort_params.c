/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 05:27:16 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/20 05:34:39 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print_params(char **argv)
{
	int	i;
	int	j;

	j = 1 ;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		tmp = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[tmp], argv[j]) > 0)
				tmp = j;
			j++;
		}
		if (tmp != i)
		{
			ft_swap(&argv[i], &argv[tmp]);
		}
		i++;
	}
	ft_print_params(argv);
	return (0);
}
