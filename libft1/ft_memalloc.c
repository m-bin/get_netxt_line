/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:16:42 by mbin              #+#    #+#             */
/*   Updated: 2019/01/12 21:20:48 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char				*temp;
	unsigned int		i;

	if (!size)
		return (NULL);
	temp = (char *)malloc(size * sizeof(char));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}
