/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:22:31 by mbin              #+#    #+#             */
/*   Updated: 2019/01/23 17:36:05 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*fresh;
	unsigned int	i;

	fresh = (char*)malloc((size + 1) * sizeof(char));
	if (!fresh)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		fresh[i] = 0;
		i++;
	}
	return (fresh);
}
