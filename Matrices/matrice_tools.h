/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_tools.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/25/11 16:31:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/25/11 16:31:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRICE_TOOLS_H
# define MATRICE_TOOLS_H

# include <stdlib.h>
# include "../libft.h"
# include "matrice.h"

t_matrice_coord	*matrice_coord(size_t row, size_t column);
t_matrice_value	*matrice_value(double number, t_matrice_coord coord);
void			m_print(t_ctrl *matrice);

#endif
