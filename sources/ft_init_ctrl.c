/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ctrl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 01:19:16 by mflorent          #+#    #+#             */
/*   Updated: 2017/12/12 01:19:18 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

t_ctrl	*ft_init_ctrl(void)
{
	t_ctrl	*new_ctrl;

	new_ctrl = malloc(sizeof(t_ctrl));
	new_ctrl->count = 0;
	new_ctrl->first = NULL;
	new_ctrl->last = NULL;
	new_ctrl->curr = NULL;
	new_ctrl->last_ac = NULL;
	return (new_ctrl);
}
