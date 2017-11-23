/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:38:28 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/16 18:38:31 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (dstsize == 0 || dst[i] == '\0')
		return (ft_strlen(src));
	if (src[i] == '\0')
		return (len);
	while (src[i] != '\0' && len < dstsize - 1)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	if (len >= dstsize)
		return (dstsize + ft_strlen(src));
	dst[len] = '\0';
	return (len + ft_strlen(src) - 1);
}
