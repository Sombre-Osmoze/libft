/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_math.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:52:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/05/12 17:52:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRICE_MATH_H
# define MATRICE_MATH_H

# include "matrice.h"

t_ctrl	*matrice_factor(t_ctrl *m_one, t_ctrl *m_two, int store[2]);

#endif
