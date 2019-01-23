/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:59:11 by mbin              #+#    #+#             */
/*   Updated: 2019/01/18 19:27:17 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_decoupe(char const *s, char c)
{
	int		i;
	int		is_first_letter;
	int		compteur;

	i = 0;
	compteur = 0;
	is_first_letter = 1;
	while (s[i])
	{
		if (s[i] == c)
			is_first_letter = 1;
		else if (is_first_letter == 1)
		{
			is_first_letter = 0;
			compteur++;
		}
		i++;
	}
	return (compteur);
}

static char	*ft_cree_mot(char const *s, char c, int *pi)
{
	char	*temp;
	int		i;
	int		j;

	i = *pi;
	while (s[i] == c)
		i++;
	*pi = i;
	j = 0;
	while (s[i + j] && s[i + j] != c)
		j++;
	temp = (char *)malloc((j + 1) * sizeof(char *));
	if (!temp)
		return (NULL);
	return (temp);
}

static void	ft_ecrit_mot(char const *s, char c, int *pi, char *temp)
{
	int		j;
	int		i;

	i = *pi;
	j = 0;
	while (s[i] && s[i] != c)
	{
		temp[j] = s[i];
		j++;
		i++;
	}
	temp[j] = 0;
	*pi = i;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		nb_mots;
	int		i;
	int		m;

	if (s == NULL)
		return (NULL);
	nb_mots = ft_decoupe(s, c);
	res = (char **)malloc((nb_mots + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	m = 0;
	while (m < nb_mots)
	{
		res[m] = ft_cree_mot(s, c, &i);
		if (!res[m])
			return (NULL);
		ft_ecrit_mot(s, c, &i, res[m]);
		m++;
	}
	res[m] = NULL;
	return (res);
}
