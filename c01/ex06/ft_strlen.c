/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:hsamir <hsamir@student.42kocaeli.com.tr>                       +#+ 
	+:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 06:14:46 by marvin            #+#    #+#             */
/*   Updated: 2024/07/09 06:16:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}
