/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:56:53 by hsamir            #+#    #+#             */
/*   Updated: 2024/07/24 12:56:55 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_str_len(char **strs, int size)
{
	int	total_wc;
	int	i;

	total_wc = 0;
	i = 0;
	while (i < size)
	{
		total_wc += str_len(strs[i]);
		i++;
	}
	return (total_wc);
}

void	fill_sep(char **str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		*(*str)++ = sep[i++];
}

void	fill_str(char *str, char **strs, char *sep, int size)
{
	int		i;
	int		j;
	char	*arr;

	arr = str;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*arr++ = strs[i][j++];
		if (i < size - 1)
			fill_sep(&arr, sep);
		i++;
	}
	*arr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		slen;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	slen = (total_str_len(strs, size) + (size - 1) * str_len(sep) + 1);
	arr = malloc(slen);
	if (!arr)
		return (0);
	fill_str(arr, strs, sep, size);
	return (arr);
}
