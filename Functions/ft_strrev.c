/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/23/11 19:20:00 by mflorent          #+#    #+#             */
/*   Updated: 2018/23/11 19:20:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	char *buff = str;
	char c;
	char *tmp= str;

	while (*buff)
		buff++;
	buff--;
	while (*str != '\0' && buff > str)
	{
		c = *str;
		*str = *buff;
		*buff = c;
		str++;
		buff--;
	}
	return tmp;
}
