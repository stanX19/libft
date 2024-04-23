/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:36:21 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 16:13:58 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// success	: t_stringstream pointer,	val=long double,		errno=0
// no read	: NULL,						val=0,					errno=EINVAL
t_stringstream	*ss_read_long_double(t_stringstream *ss, long double *val)
{
	char	*newpos;

	if (ss == NULL || ss->pos == NULL || *ss->pos == '\0')
	{
		return (NULL);
	}
	if (errno != 0)
	{
		ft_printf("Error: Unresolved error. errno %i\n", errno);
		return (NULL);
	}
	*val = ft_strtold(ss->pos, &newpos);
	ss_update_pos(ss, newpos);
	if (errno != EINVAL)
		return (ss);
	else
		return (NULL);
}

t_stringstream	*ss_read_double(t_stringstream *ss, double *val)
{
	t_stringstream	*ret;
	long double		val_long;

	ret = ss_read_long_double(ss, &val_long);
	*val = val_long;
	return (ret);
}
