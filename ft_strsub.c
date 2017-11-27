/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:29:12 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/20 14:29:14 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	new_str = NULL;
	i = 0;
	new_str = malloc(sizeof(char) * len + 1);
	if (new_str != NULL || s != NULL)
	{
		while (s[start] || i < len)
		{
			new_str[i] = s[start];
			start++;
			i++;
		}
		new_str[start] = '\0';
	}
	return (new_str);
}
