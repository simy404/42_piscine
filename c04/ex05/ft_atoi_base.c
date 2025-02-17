/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:04:35 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/18 18:04:37 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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

int	get_sign(char *c, int *i)
{
	int	count;

	count = 0;
	while (c[*i] == ' ' || c[*i] == '\t')
		*i = *i + 1;
	while (c[*i] == '-' || c[*i] == '+')
	{
		if (c[*i] == '-')
			count++;
		*i = *i + 1;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	get_num(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	total;
	int	sign;
	int	i;
	int	len;

	if (!is_legit_base(base))
		return (0);
	total = 0;
	i = 0;
	sign = get_sign(str, &i);
	len = get_len(base);
	while (str[i] && get_num(base, str[i]) < len && get_num(base, str[i]) >= 0)
	{
		total = total * len + get_num(base, str[i]);
		i++;
	}
	return (sign * total);
}
