/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:10:01 by mbin              #+#    #+#             */
/*   Updated: 2019/01/12 17:43:29 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char*)s;
	while (i < n)
	{
		copy[i] = 0;
		i++;
	}
	s = (void*)copy;
}
