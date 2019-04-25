/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_math.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:52:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/05/12 17:52:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice_math.h"

t_ctrl	*matrice_factor(t_ctrl *m_one, t_ctrl *m_two, int store[2])
{
	t_ctrl			*m_result;
	t_matrice_coord	dim;

	dim = *(t_matrice_coord *)m_one->info;
	if (store[0] != 1 && store[1] != 1)
		m_result = init_matrice(dim.row, dim.column);
	m_result = store[0] == 1 ? m_one : m_two;
	m_result->curr = m_result->first;
	while (m_result && m_result->curr)
	{
		((t_matrice_value *)(m_result->curr->content))->value =
				((t_matrice_value *)(m_one->curr->content))->value
					* ((t_matrice_value *)(m_two->curr->content))->value;
		m_result->curr = m_result->curr;
		m_one->curr = m_one->curr->next;
		m_two->curr = m_two->curr->next;
	}
	if (store[0] == 2)
		ft_rm_ctrl(&m_one);
	else if (store[1] == 2)
		ft_rm_ctrl(&m_two);
	return (m_result);
}
