/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:18:27 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/15 11:18:29 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	int				inf;
	unsigned char	*src_p;
	unsigned char	*dst_p;

	i = 0;
	inf = 0;
	src_p = (unsigned char *)src;
	dst_p = dst;
	if (*src_p < *dst_p)
	{
		inf = 1;
		i = len - 1;
	}
	while (i < len || len != 0)
	{
		dst_p[i] = src_p[i];
		if (inf)
			i--;
		else
			i++;
	}
	return (dst);
}
