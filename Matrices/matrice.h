/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:32:47 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/22 23:18:51 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRICE_H
#define MATRICE_H

# include <stdlib.h>
# include "../libft.h"
# include "matrice_tools.h"

/**
** This function initialise the matrice with the given dimension
**
** @param rows The number of rows
** @param columns The number of columns
** @return The pointer to the matrice
*/
t_ctrl			*init_matrice(size_t rows, size_t columns);
t_matrice_value	*m_get_value(t_ctrl *matrice, t_matrice_coord coord);
t_item			*m_set_value(t_ctrl	*matrice, t_matrice_value value);

#endif
