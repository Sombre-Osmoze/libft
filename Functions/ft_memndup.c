/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/30/05 01:59:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/05/30 02:10:13 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	*ft_memndup(const void *content, size_t size)
{
	unsigned char		*new_content;
	const unsigned char	*p_content;
	long				i;

	i = 0;
	if (!content)
		return (NULL);
	new_content = ft_memalloc(size + 1);
	p_content = (const unsigned char *)content;
	if (new_content)
	{
		while (i < (long)size)
		{
			new_content[i] = *p_content++;
			i += 1;
		}
		new_content[i] = '\0';
	}
	return (new_content);
}
