/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 16:03:26 by mflorent          #+#    #+#             */
/*   Updated: 2017/12/14 16:03:26 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnjoin(const char *s1, size_t n1, const char *s2, size_t n2)
{
	size_t	i[2];
	char	*new;
	char	*buff;

	if ((new = ft_strnew((int)(n1 + n2) * sizeof(char) + 1)) == NULL)
		return (NULL);
	ft_bzero(i, sizeof(i));
	buff = new;
	while (s1 && *s1 && i[0] < n1)
	{
		*new++ = *s1++;
		i[0] += 1;
	}
	while (s2 && *s2 && i[1] < n2)
	{
		*new++ = *s2++;
		i[1] += 1;
	}
	*new = '\0';
	return (buff);
}
