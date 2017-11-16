/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:38:36 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/16 13:38:37 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *s1, char *s2)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	len--;
	while (s2[i] != '\0')
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
