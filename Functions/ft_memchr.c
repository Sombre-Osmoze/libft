/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:17:17 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/15 14:54:31 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

const void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_p;

	i = 0;
	s_p = (const unsigned char *)s;
	while (i < n)
	{
		if (*s_p == (unsigned char)c)
			return ((const void *)s_p);
		i++;
		s_p++;
	}
	return (NULL);
}
