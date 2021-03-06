/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:01:08 by mflorent          #+#    #+#             */
/*   Updated: 2017/11/20 21:20:35 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new;

	i = 0;
	if (s == NULL || (new = (char *)malloc(len * sizeof(char) + 1)) == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
