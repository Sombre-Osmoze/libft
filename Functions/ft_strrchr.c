/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:40:36 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/16 19:40:43 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

const char	*ft_strrchr(const char *s, int c)
{
	const char	*buf;

	buf = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			buf = (const char *)s;
		s++;
	}
	if (c == '\0')
		return ((const char *)s);
	return (buf);
}
