/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:08:15 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/22 17:08:16 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../includes/libft.h"

void	ft_putendl(const char *s)
{
	if (s != NULL)
	{
		ft_putstr(s);
		write(1, "\n", 1);
	}
}
