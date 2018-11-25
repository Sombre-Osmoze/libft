/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:38:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/06/06 22:38:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_longset(long *table, long value, size_t len)
{
	size_t	i;

	i = 0;
	if (table && len > 0)
		while (i < len)
		{
			table[i] = value;
			i += 1;
		}
}
