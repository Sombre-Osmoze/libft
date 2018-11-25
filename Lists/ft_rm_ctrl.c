/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_ctrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/27/12 18:31:00 by mflorent          #+#    #+#             */
/*   Updated: 2017/27/12 18:31:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	ft_rm_ctrl(t_ctrl **ctrl)
{
	if (ctrl)
	{
		(*ctrl)->count = 0;
		(*ctrl)->curr = NULL;
		(*ctrl)->first = NULL;
		(*ctrl)->last = NULL;
		(*ctrl)->last_ac = NULL;
		free((*ctrl));
		ctrl = NULL;
	}
}
