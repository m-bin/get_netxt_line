/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:08:57 by mbin              #+#    #+#             */
/*   Updated: 2019/01/18 18:45:44 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_de_chiffres(int n)
{
	int				i;
	unsigned int	m;

	if (!n)
		return (1);
	i = 0;
	m = n;
	if (n < 0)
	{
		i++;
		m = -n;
	}
	while (m)
	{
		m = m / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int m)
{
	char			*res;
	unsigned int	n;
	int				i;
	int				signe;

	i = 0;
	if (!(res = (char *)malloc((nb_de_chiffres(m) + 1) * sizeof(char))))
		return (NULL);
	signe = 0;
	if (m < 0)
	{
		res[0] = '-';
		signe = 1;
		n = -m;
	}
	else
		n = m;
	while (i < nb_de_chiffres(m) - signe)
	{
		res[nb_de_chiffres(m) - 1 - i] = '0' + n % 10;
		n = n / 10;
		i++;
	}
	res[nb_de_chiffres(m)] = 0;
	return (res);
}
