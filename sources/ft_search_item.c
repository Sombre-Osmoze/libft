/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_item.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 09:43:00 by mflorent          #+#    #+#             */
/*   Updated: 2017/04/12 09:43:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_item	*ft_search_item(t_ctrl *ctrl, const void *ref, int i,
						int (*cmp)(const void *cmp, const void *ref))
{
	t_item	*tmp;
	int		*cont_ref;

	cont_ref = NULL;
	if (!ctrl || !ctrl->head)
		return (NULL);
	tmp = ctrl->head;
	while (tmp != NULL)
	{
		cont_ref = tmp->content_ref;
		if ((cmp)(&cont_ref[i], ref))
		{
			ctrl->last_ac = tmp;
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (tmp);
}
