/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:35:08 by mbin              #+#    #+#             */
/*   Updated: 2019/01/23 17:28:58 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*begin_fresh;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	fresh = ft_lstnew(tmp->content, tmp->content_size);
	if (fresh == NULL)
		return (NULL);
	begin_fresh = fresh;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		fresh->next = ft_lstnew(tmp->content, tmp->content_size);
		if (fresh->next == NULL)
			return (NULL);
		lst = lst->next;
		fresh = fresh->next;
	}
	return (begin_fresh);
}
