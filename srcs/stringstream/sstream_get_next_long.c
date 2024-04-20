/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sstream_get_next_long.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:55:35 by shatan            #+#    #+#             */
/*   Updated: 2024/04/20 15:43:30 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// success	: t_stringstream pointer,	val=long,				errno=0
// overflow	: t_stringstream pointer,	val=LONG_MAX/LONG_MIN,	errno=ERANGE
// no read	: NULL,						val=0,					errno=EINVAL
t_stringstream	*sstream_read_long(t_stringstream *ss, long int *val)
{
	if (ss == NULL || ss->pos == NULL)
	{
		return (NULL);
	}
	if (errno != 0)
	{
		ft_printf("Error: Unresolved error. errno %i\n", errno);
		return (NULL);
	}
	*val = ft_strtol(ss->pos, &ss->pos, "0123456789");
	if (errno != EINVAL)
		return (ss);
	else
		return (NULL);
}
