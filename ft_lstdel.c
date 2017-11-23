/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:28:50 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/22 20:28:52 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p_curr;

	p_curr = *alst;
	while (p_curr->next != NULL)
	{
		(del)(p_curr->content, p_curr->content_size);
		p_curr = p_curr->next;
	}
	(*alst) = NULL;
}
