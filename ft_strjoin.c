/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:48:29 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/20 15:49:17 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	int		i[3];

	new_str = NULL;
	i[0] = (int)ft_strlen(s1) - 1;
	i[1] = (int)ft_strlen(s2) - 1;
	if (s1 != NULL && s2 != NULL)
		new_str = malloc(sizeof(char) * (i[0] + i[1] + 1 ));
	if (new_str != NULL)
	{
		i[2] = 0;
		while (i[2] <= (i[0] + i[1]))
			if (*s1)
				new_str[i[2]++] = *s1++;
			else if (*s2)
				new_str[i[2]++] = *s2++;
		new_str[i[2]] = '\0';
	}
	return (new_str);
}
