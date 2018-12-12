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
	t_matrice_value	coord;

	dim = *(t_matrice_coord *)m_one->info;
	if (store[0] != 1 && store[1] != 1)
		m_result = init_matrice(dim.row, dim.column);
	else if (store[0] == 2)
		m_result = m_one;
	else
		m_result = m_two;
	m_result->curr = m_result->first;
	while (m_result && m_result->curr)
	{







		m_result->curr = m_result->curr;
	}
	return (m_result);
}
