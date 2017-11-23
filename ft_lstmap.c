/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:29:09 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/23 15:29:10 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;

	new_lst = NULL;
	while (lst != NULL)
	{
		new_lst = ft_lstnew(((f)(lst))->content, ((f)(lst))->content_size);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
