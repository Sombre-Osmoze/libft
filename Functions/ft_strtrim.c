/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:40:59 by mflorent          #+#    #+#             */
/*   Updated: 2017/11/20 21:34:34 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

static int	is_blank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	c_count(char const *s)
{
	int	i;
	int	j;

	i = 0;
	j = (int)ft_strlen(s) - 1;
	while (is_blank(s[i]))
		i++;
	while (is_blank(s[j]))
		j--;
	if (j - i < 0)
		return (0);
	return ((j - i) + 1);
}

/*
** Supprime les "white space" devant et derrière la string et retourne le tout
** dans une chaine de caractère allouée
**
** @param s Chaine de caractre à "trim"
** @return Pointeur sur la nouvelle chaine de caractère
*/

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		n;

	i = 0;
	n = 0;
	new = NULL;
	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (c_count(s) + 1));
	if (new == NULL)
		return (NULL);
	while (is_blank(s[i]))
		i++;
	while (s[i])
		new[n++] = s[i++];
	n--;
	while (n >= 0 && is_blank(new[n]))
		n--;
	new[++n] = '\0';
	return (new);
}
