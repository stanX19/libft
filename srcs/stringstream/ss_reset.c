/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:08:41 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 16:17:17 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// resets status and position of stringstream
t_stringstream	*ss_reset(t_stringstream *ss)
{
	if (ss == NULL || ss->str == NULL)
	{
		return (NULL);
	}
	ss->pos = ss->str;
	ss->prev_pos = NULL;
	return (ss);
}
