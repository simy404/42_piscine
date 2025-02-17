/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:08:35 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/16 09:22:01 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cmp(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] && to_find[i] && str[i] == to_find[i])
	{
		if (!to_find[i + 1])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_cmp(&str[i], to_find))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
