/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_cmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:03:07 by mflorent          #+#    #+#             */
/*   Updated: 2017/12/11 22:03:10 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_int_cmp(const void *cmp, const void *ref)
{
	const int *cmp_p;
	const int *ref_p;

	cmp_p = (const int *)cmp;
	ref_p = (const int *)ref;
	if (*cmp_p == *ref_p)
		return (1);
	else
		return (0);
}
