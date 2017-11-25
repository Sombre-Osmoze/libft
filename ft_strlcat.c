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
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(dst);
	len = len_src;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (src[i] == '\0')
		return (ft_strlen(dst));
	while (src[i] != '\0' && len < dstsize - 1)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	if (dstsize < ft_strlen(src) + len_src)
		return (ft_strlen(src) + len_src);
	dst[len] = '\0';
	return (len);
}
