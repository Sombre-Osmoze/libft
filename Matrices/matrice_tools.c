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

t_matrice_value	*matrice_value(double number, t_matrice_coord coord)
{
	t_matrice_value	*value;

	value = (t_matrice_value *)malloc(sizeof(t_matrice_value));
	if (value)
		*value = (t_matrice_value){ number, coord };
	return (value);
}

void	m_print(t_ctrl *matrice)
{
	char			*display;
	t_matrice_coord	*size;
	t_item			*item;
	t_matrice_value *value;

	size = (t_matrice_coord *)(matrice->info);
	display = ft_memalloc(((size->column * 2) +  4) *size->row);
	item = matrice->first;
	while (item)
	{
		value = (t_matrice_value *)item->content;
		display = ft_strcpy(display, ft_itoa_base((int)(value->value), 10));
		if (value->coord.column == 1)
			display = ft_strcpy(display, "| ");
		else if (value->coord.column == size->column)
			display = ft_strcpy(display, "|\n");
		item = item->next;
	}
	ft_putstr(display);
	free(display);
}

//
// | 0 0 0 0 |
// | 0 0 0 0 |
// | 0 0 0 0 |
// | 0 0 0 0 |
// | 0 0 0 0 |
//
