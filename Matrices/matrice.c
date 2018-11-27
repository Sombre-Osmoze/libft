/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/24/11 11:18:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/24/11 11:18:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

/*
** This function initialise the matrice with the given dimension
**
** @param rows The number of rows
** @param columns The number of columns
** @return The pointer to the matrice
*/

t_ctrl	*init_matrice(size_t rows, size_t columns)
{
	t_ctrl			*matrice;
	t_item			*num;
	t_matrice_coord	coord;

	matrice = ft_init_ctrl();
	matrice->info = matrice_coord(rows, columns);
	coord = (t_matrice_coord){ rows, columns };
	while (matrice && coord.row > 0)
	{
		num = ft_create_item(matrice, 0);
		if (num == NULL)
			return (NULL);
		num->content = matrice_value(NULL, coord);
		num->content_size = 0;
		if (coord.column < columns)
			num->content_ref = ft_get_item(matrice, columns);
		if (coord.column == 1) 
			coord = (t_matrice_coord){ coord.row -1, columns };
		else
			coord.column -= 1;
	}
	return (matrice);
}

t_matrice_value	*m_get_value(t_ctrl *matrice, t_matrice_coord coord)
{
	t_item			*item;
	t_matrice_coord	*size;


	size = (t_matrice_coord *)(matrice->info);
	if (coord.row <= size->row && coord.column <= size->column)
	{
		item = matrice->first;
		while (<#condition#>)
			item = (t_item *)item->content_ref;
		while (<#condition#>)
			item = item->next;
		return ((t_matrice_value *)(item->content));
	}
	else
		return (NULL);
}

t_item	*m_set_value(t_ctrl	*matrice, t_matrice_value *value)
{
	// TODO: Implementation de la fonction à faire.
	return (NULL);
}
