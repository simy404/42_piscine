/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:10:54 by marvin            #+#    #+#             */
/*   Updated: 2024/07/14 01:07:22 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	convert_to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	convert_to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	return (0);
}

int	is_num_or_letter(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	is_upper;
	int	i;

	i = 0;
	is_upper = 1;
	while (str[i])
	{
		if (!is_num_or_letter(str[i]))
			is_upper = 1;
		else if (is_upper)
			is_upper = convert_to_upper(&str[i]);
		else
			convert_to_lower(&str[i]);
		i++;
	}
	return (str);
}
