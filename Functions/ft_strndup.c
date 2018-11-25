/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 18:52:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/12/10 18:52:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../libft.h"

char	*ft_strndup(const char *s1, size_t size)
{
	char	*cpy;
	size_t	i;

	cpy = ft_memalloc(sizeof(size_t) * (size) + 1);
	if (cpy != NULL)
	{
		i = 0;
		while (i < size && *s1)
		{
			cpy[i] = *s1++;
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}
