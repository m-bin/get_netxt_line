/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:31:15 by mbin              #+#    #+#             */
/*   Updated: 2019/01/23 17:24:33 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*lst;

	if (alst == NULL || *alst == NULL)
		return ;
	lst = *alst;
	while (lst)
	{
		temp = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = temp;
	}
	*alst = NULL;
}
