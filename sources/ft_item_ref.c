/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_item_ref.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/23/10 06:56:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/23/10 06:56:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

int	ft_item_ref(const t_item *item, const void *ref, int range)
{
	int	*val;
	int	*item_ref;

	val = (int *)ref;
	item_ref = (int *)item->content_ref;
	return (item_ref[range] == val[range]);
}
