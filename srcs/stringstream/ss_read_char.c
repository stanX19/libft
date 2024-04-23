/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:13 by stan              #+#    #+#             */
/*   Updated: 2024/04/23 16:12:28 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

t_stringstream	*ss_read_char(t_stringstream *ss, char *cptr)
{
	if (!ss || !cptr)
		return (NULL);
	*cptr = *ss->pos;
	if (*ss->pos != '\0')
		ss_update_pos(ss, ss->pos + 1);
	return (ss);
}
