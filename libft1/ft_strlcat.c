/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:13:01 by mbin              #+#    #+#             */
/*   Updated: 2019/01/15 20:16:18 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	lend;

	lend = ft_strlen(dst);
	if (lend > size || size == 0)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] && (lend + i < size - 1))
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = 0;
	return (lend + ft_strlen(src));
}
