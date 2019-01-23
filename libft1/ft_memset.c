/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:03:58 by mbin              #+#    #+#             */
/*   Updated: 2019/01/15 19:19:08 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*cp;

	cp = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		cp[i] = (unsigned char)c;
		i++;
	}
	return ((void *)cp);
}
