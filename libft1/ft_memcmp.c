/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:34:43 by mbin              #+#    #+#             */
/*   Updated: 2019/01/15 20:22:08 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*cps1;
	unsigned char	*cps2;

	i = 0;
	cps1 = (unsigned char *)s1;
	cps2 = (unsigned char *)s2;
	while (i < n && cps2[i] == cps1[i])
		i++;
	if (i == n)
		return (0);
	return ((int)(cps1[i] - cps2[i]));
}
