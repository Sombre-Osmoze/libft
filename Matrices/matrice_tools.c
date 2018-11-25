/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/25/11 16:31:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/25/11 16:31:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice_tools.h"

t_matrice_coord	*matrice_coord(size_t row, size_t column)
{
	t_matrice_coord	*coord;

	coord = ft_memalloc(sizeof(t_matrice_coord));
	if (coord)
		*coord = (t_matrice_coord){ row, column };
	return (coord);
}
