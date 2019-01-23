/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:14:20 by mbin              #+#    #+#             */
/*   Updated: 2019/01/15 19:08:14 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*cpdst;
	unsigned char	*cpsrc;

	cpdst = (unsigned char *)dst;
	cpsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		cpdst[i] = cpsrc[i];
		if (cpsrc[i] == (unsigned char)c)
		{
			return ((void *)(cpdst + i + 1));
		}
		i++;
	}
	return (NULL);
}
