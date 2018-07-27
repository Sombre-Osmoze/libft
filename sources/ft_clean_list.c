/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/28/12 12:50:00 by mflorent          #+#    #+#             */
/*   Updated: 2017/28/12 12:50:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/../includes/libft.h"

void	ft_clean_list(t_ctrl *ctrl)
{
	t_item	*item;

	if (ctrl)
	{
		item = ctrl->tail;
		while (item != NULL)
		{
			ctrl->curr = item;
			item = item->prev;
			if (ctrl->curr)
				ft_rm_item(ctrl, ctrl->curr->row);
		}
	}
}
