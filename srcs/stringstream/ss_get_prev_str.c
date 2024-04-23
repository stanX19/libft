/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_get_prev_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:54:05 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 16:08:24 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

char	*ss_get_prev_str(t_stringstream *ss)
{
	if (!ss || !ss->prev_pos || !ss->pos)
		return (ft_calloc(sizeof(char), 1));
	return (ft_strndup(ss->prev_pos, ss->pos - ss->prev_pos));
}