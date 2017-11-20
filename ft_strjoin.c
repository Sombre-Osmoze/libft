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

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	int		i;

	new_str = NULL;
	i = 0;
	while (*s1++)
		i++;
	while (*s2++)
		i++;
	new_str = malloc(sizeof(char) * i + 1);
	if (new_str == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (*s1)
			*new_str++ = *s1++;
		else if (*s2)
			*new_str++ = *s2++;
	}
	*new_str = '\0';
	return (new_str);
}
