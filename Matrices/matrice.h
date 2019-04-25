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

typedef t_item t_case;

typedef t_ctrl t_matrix;

typedef struct	s_matrice_coord
{
	size_t		row;
	size_t		column;
}				t_matrice_coord;

typedef struct	s_matrice_value
{
	double			value;
	t_matrice_coord	coord;

}				t_matrice_value;

/**
** This function initialise the matrice with the given dimension
**
** @param rows The number of rows
** @param columns The number of columns
** @return The pointer to the matrice
*/
t_matrix		*init_matrice(const size_t rows, const size_t columns);
t_matrice_value	*m_get_value(const t_matrix *matrice, const t_matrice_coord coord);
t_case			*m_set_value(const t_matrix *matrice, const t_matrice_value value);

#endif
