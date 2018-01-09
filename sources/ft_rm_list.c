/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflorent <mflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/28/12 00:41:00 by mflorent          #+#    #+#             */
/*   Updated: 2017/28/12 00:41:00 by mflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_rm_list(t_ctrl *ctrl)
{
	if (ctrl)
	{
		ft_clean_list(ctrl);
		ft_rm_ctrl(ctrl);
	}
}
