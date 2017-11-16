/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:59:44 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/16 19:59:48 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*buff;
	size_t	i;

	buff = NULL;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && buff == NULL)
	{
		if (*haystack == *needle)
		{
			buff = (char *)haystack;
			i = 0;
			while (needle[i] != '\0' && buff != NULL)
			{
				if (*buff != needle[i])
					buff = NULL;
				i++;
				buff++;
			}
		}
		haystack++;
	}
	return (buff);
}
