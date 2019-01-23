/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:38:31 by mbin              #+#    #+#             */
/*   Updated: 2019/01/18 17:17:00 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char			*res;
	unsigned int	i;

	i = 0;
	while (s1[i] && i < n)
		i++;
	res = (char*)malloc((i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i] && i < n)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
