/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:33:38 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/22 19:33:39 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_mail;

	new_mail = NULL;
	new_mail = malloc(sizeof(t_list));
	if (new_mail != NULL)
	{
		if (content != NULL)
		{
			new_mail->content = malloc(sizeof(content_size));
			if (new_mail->content == NULL)
				new_mail->content_size = 0;
			else
				new_mail->content_size = 0;
		}
		else
		{
			new_mail->next = NULL;
			new_mail->content_size = 0;
		}
	}
	return (new_mail);
}
