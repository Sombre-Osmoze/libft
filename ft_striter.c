/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 22:12:56 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/19 22:12:58 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striter(char *s, void (*f)(char *))
{
	if (s != NULL || (f) != NULL)
		while (*s)
			(f)(s++);
}
