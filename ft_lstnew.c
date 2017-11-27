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

t_list	*ft_lstnew(void const *content, size_t csize)
{
	t_list	*new_mail;

	new_mail = NULL;
	if ((new_mail = malloc(sizeof(t_list))) != NULL)
	{
		if (content != NULL)
		{
			if ((new_mail->content = malloc(sizeof(csize))) == NULL)
			{
				free(new_mail);
				return (NULL);
			}
			new_mail->content = ft_memmove(new_mail->content, content, csize);
			new_mail->content_size = csize;
		}
		else
		{
			new_mail->content = NULL;
			new_mail->content_size = 0;
		}
		new_mail->next = NULL;
	}
	return (new_mail);
}
