/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:00:14 by mflorent          #+#    #+#             */
/*   Updated: 2017/11/20 21:18:53 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i[4];
	char	*new;
	char	*buff;

	ft_bzero(i, sizeof(i));
	i[2] = ft_strlen(s1);
	i[3] = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((new = ft_strnew((i[2] + i[3] - 2) * sizeof(char) + 1)) == NULL)
		return (NULL);
	buff = new;
	while (i[0] < i[2])
	{
		*new++ = *s1++;
		i[0] += 1;
	}
	while (i[1] < i[3])
	{
		*new++ = *s2++;
		i[1] += 1;
	}
	*new = '\0';
	return (buff);
}
