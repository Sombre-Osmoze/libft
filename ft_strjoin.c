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
	int		i[2];

	new_str = NULL;
	i[1] = 0;
	i[0] = (int)ft_strlen(s1) - 1;
	i[0] = (int)ft_strlen(s2) - 1;
	new_str = malloc(sizeof(char) * i[0] + 1);
	if (new_str == NULL)
		return (NULL);
	while (i[1] < i[0])
		if (*s1)
		{
			new_str[i[0]++] = *s1;
			s1++;
		}
		else if (*s2)
		{
			new_str[i[0]++] = *s2;
			s2++;
		}
	new_str[i[1]] = '\0';
	return (new_str);
}
