/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:18:10 by mbin              #+#    #+#             */
/*   Updated: 2019/01/15 19:14:15 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cpdst;
	unsigned char	*cpsrc;
	unsigned int	i;

	cpdst = (unsigned char *)dst;
	cpsrc = (unsigned char *)src;
	i = 0;
	if (cpsrc > cpdst)
	{
		while (i < len)
		{
			cpdst[i] = cpsrc[i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			cpdst[len - i - 1] = cpsrc[len - i - 1];
			i++;
		}
	}
	dst = (void *)cpdst;
	return (dst);
}
