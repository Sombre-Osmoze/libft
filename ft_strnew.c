/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:02:12 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/18 19:02:13 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;
	size_t	i;

	new_str = NULL;
	new_str = malloc(sizeof(char) * size + 1);
	if (new_str != NULL)
	{
		i = 0;
		while (i < size)
			new_str[i++] = '\0';
	}
	return (new_str);
}
