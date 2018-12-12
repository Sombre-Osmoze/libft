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

t_ctrl	*init_matrice(const size_t rows, const size_t columns)
{
	t_ctrl			*matrice;
	t_item			*num;
	t_matrice_coord	coord;

	matrice = ft_init_ctrl();
	matrice->info = matrice_coord(rows, columns);
	coord = *(t_matrice_coord *)(matrice->info);
	while (matrice && coord.row > 0)
	{
		num = ft_create_item(matrice, 0);
		if (num == NULL)
			ft_rm_ctrl(&matrice);
		else
		{
			num->content = matrice_value(0, coord);
			num->content_size = sizeof(t_matrice_value);
			if (coord.column < columns)
				num->content_ref = ft_get_item(matrice, columns);
			if (coord.column == 1)
				coord = (t_matrice_coord){ coord.row -1, columns };
			else
				coord.column -= 1;
		}
	}
	return (matrice);
}

t_ctrl	*init_matrice_unity(size_t rows, size_t columns)
{
	t_ctrl			*matrice;
	t_item			*num;
	t_matrice_coord	crd;

	matrice = ft_init_ctrl();
	matrice->info = matrice_coord(rows, columns);
	crd = *(t_matrice_coord *)(matrice->info);;
	while (matrice && crd.row > 0)
	{
		num = ft_create_item(matrice, 0);
		if (num == NULL)
			ft_rm_ctrl(&matrice);
		else
		{
			num->content = matrice_value((double)(crd.column == crd.row), crd);
			num->content_size = sizeof(t_matrice_value);
			if (crd.column < columns)
				num->content_ref = ft_get_item(matrice, columns);
			if (crd.column == 1)
				crd = (t_matrice_coord){ crd.row -1, columns };
			else
				crd.column -= 1;
		}
	}
	return (matrice);
}



t_matrice_value	*m_get_value(t_ctrl *matrice, t_matrice_coord crd)
{
	t_item			*item;
	t_matrice_coord	*size;

	size = (t_matrice_coord *)(matrice->info);
	if (crd.row <= size->row && crd.column <= size->column)
	{
		item = matrice->first;
		while (((t_matrice_value *)(item->content))->coord.row == crd.row)
			item = (t_item *)item->content_ref;
		while (((t_matrice_value *)(item->content))->coord.column == crd.column)
			item = item->next;
		return ((t_matrice_value *)(item->content));
	}
	else
		return (NULL);
}

t_item	*m_set_value(t_ctrl	*matrice, t_matrice_value value)
{
	t_item			*item;
	t_matrice_coord	*size;

	size = (t_matrice_coord *)(matrice->info);
	if (value.coord.row <= size->row && value.coord.column <= size->column)
	{
		item = matrice->first;
		while (((t_matrice_value *)(item->content))->coord.row == value.coord.row)
			item = (t_item *)item->content_ref;
		while (((t_matrice_value *)(item->content))->coord.column == value.coord.column)
			item = item->next;
		(*(t_matrice_value *)(item->content)) = value;
		return (item);
	}
	return (NULL);
}
