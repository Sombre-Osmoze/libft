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
#include "libft.h"

void	ft_clean_list(t_ctrl *ctrl)
{
	t_item	*item;

	if (ctrl)
	{
		item = ctrl->head;
		while (item != NULL)
		{
			ft_rm_item(ctrl, item->row);
			item = item->next;
		}
	}
}
