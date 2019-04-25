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

/**
 This function compute a matrice multiplication. This function has a complexity of O(m_one.count + m_two.count)

 @param m_one The first matrix of the operation
 @param m_two The seconde matrix of the operation
 @param store A size 2 array to specifie where to store the operation result. If both case equal 0 a new matrix will be created
 @return <#return value description#>
 */
t_ctrl	*matrice_factor(t_ctrl *m_one, t_ctrl *m_two, int store[2]);

#endif
