/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 23:45:47 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/16 23:45:51 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*buff;
	size_t	i;

	buff = NULL;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && buff == NULL && (len > 0))
	{
		if (*haystack == *needle)
		{
			buff = (char *)haystack;
			i = 0;
			while (needle[i] != '\0' && buff != NULL)
			{
				if (buff[i] != needle[i])
					buff = NULL;
				i++;
			}
		}
		haystack++;
		len--;
	}
	return (buff);
}
