/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:30:47 by mbin              #+#    #+#             */
/*   Updated: 2019/01/18 18:17:46 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_espace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static void	determine_taille(char const *s, int *i, int *j, int *k)
{
	*i = 0;
	while (ft_espace(s[*i]))
		(*i)++;
	*j = 0;
	while (s[*i + *j])
		(*j)++;
	*k = 0;
	while (*j > 0 && ft_espace(s[*i + *j - 1 - *k]))
		(*k)++;
	*k = *j - *k;
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (s == NULL)
		return (NULL);
	determine_taille(s, &i, &j, &k);
	res = (char *)malloc((k + 1) * sizeof(char));
	if (!res)
		return (NULL);
	j = 0;
	while (j < k)
	{
		res[j] = s[i + j];
		j++;
	}
	res[j] = 0;
	return (res);
}
