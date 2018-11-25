/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 23/11/2018 19:17:00 by mflorent          #+#    #+#             */
/*   Updated: 23/11/2018 19:17:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoa_base(int value, int base)
{
	char *nb;
	char *tmp;
	int nega;

	nega = 0;
	if (base > 16 || base < 2)
		return NULL;
	nb = malloc(sizeof(char) * 33);
	tmp = nb;
	if (nb)
	{
		if (value == 0)
		{
			*nb = '0';
			*++nb = '\0';
			return --nb;
		}
		if (value < 0)
		{
			value *= -1;
			if (base == 10)
			{
				nega = 1;
				*nb++ = '-';
			}
		}
		while (value)
		{
			if (value % base < 10)
				*nb++ = value % base + '0';
			else
				*nb++= value % base + 'A' - 10;
			value = value / base;
		}
		*nb = '\0';
		ft_strrev(tmp + nega);
	}
	return tmp;
}
