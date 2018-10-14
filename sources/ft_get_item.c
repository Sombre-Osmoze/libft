/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_item.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 10:12:00 by mflorent          #+#    #+#             */
/*   Updated: 2017/04/12 10:12:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

static t_item	*ft_mv_prev_pos(t_ctrl *c, unsigned long long res[4], size_t ps)
{
	unsigned long long	tmp;
	int					i[2];

	tmp = res[0];
	if (c->count <= 50)
		return (c->head);
	ft_bzero(i, sizeof(i[0] * 2));
	while (i[0] < 4)
	{
		if (res[i[0]] < tmp)
		{
			tmp = res[i[0]];
			i[1]++;
		}
	}
	if (c->head && (i[1] == 0 || c->head->row == ps - 1))
		return (c->head);
	if (c->tail && (i[1] == 1 || c->tail->row == ps - 1))
		return (c->tail);
	if (c->curr && (i[1] == 2 || c->curr->row == ps - 1))
		return (c->curr);
	if (c->last_ac && (i[1] == 3 || c->last_ac->row <= ps - 1))
		return (c->last_ac);
	return (NULL);
}

/*
** <#Description#>
** @param ctrl <#ctrl description#>
** @param pos <#pos description#>
** @return <#return value description#>
*/

t_item			*ft_get_item(t_ctrl *ctrl, size_t pos)
{
	unsigned long long	res[4];
	t_item				*tmp;

	tmp = ctrl->head;
	if (ctrl->count > 15)
	{
		ft_bzero(res, sizeof(res[0] * 5));
		if (ctrl->head)
			res[0] = ft_abs(ctrl->head->row - pos);
		if (ctrl->tail)
			res[1] = ft_abs(ctrl->tail->row - pos);
		if (ctrl->curr && ctrl->curr != ctrl->head && ctrl->curr != ctrl->tail)
			res[2] = ft_abs(ctrl->curr->row - pos);
		if (ctrl->last_ac && ctrl->curr != ctrl->head
			&& ctrl->curr != ctrl->tail && ctrl->curr != ctrl->curr)
			res[3] = ft_abs(ctrl->last_ac->row - pos);
		tmp = ft_mv_prev_pos(ctrl, res, pos);
	}
	if (tmp && ((tmp->row == pos - 1 && tmp->row - pos > 0) || tmp->row == 0))
		while (tmp && tmp->row < pos)
			tmp = tmp->next;
	else if (tmp && tmp->row == pos - 1 && (long long)(tmp->row - pos) < 0)
		while (tmp && tmp->row == pos - 1)
			tmp = tmp->prev;
	return (tmp);
}
