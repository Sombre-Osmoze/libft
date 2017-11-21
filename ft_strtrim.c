/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:23:18 by marcusflo         #+#    #+#             */
/*   Updated: 2017/11/20 18:23:19 by marcusflo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_str_dlen(const char *s, int comp[2])
{
	int i;

	i = 0;
	while (i < 2)
		comp[i++] = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\n' && s[i] != '\t' && s[i] != ' ')
		{
			if (comp[0] == -1)
				comp[0] = i;
			else if (!(s[i + 1] != '\n' && s[i + 1] != '\t' && s[i + 1] != ' '))
				comp[1] = i;
		}
		i++;
	}
}

char		*ft_strtrim(const char *s)
{
	char	*new_str;
	int		i;
	int		comp[2];

	new_str = NULL;
	i = 0;
	ft_str_dlen(s, comp);
	new_str = malloc(sizeof(char) * (comp[0] - comp[1] + 2));
	if (new_str != NULL)
	{
		while (comp[0] <= comp[1])
		{
			new_str[i++] = s[comp[0]++];
		}
		new_str[i] = '\0';
	}
	return (new_str);
}
