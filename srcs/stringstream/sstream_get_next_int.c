/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sstream_get_next_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:13 by stan              #+#    #+#             */
/*   Updated: 2024/04/20 16:31:44 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// int version of read_long
// errno will be set to ERANGE upon int overflow
t_stringstream	*sstream_read_int(t_stringstream *ss, int *val)
{
	t_stringstream	*ret;
	long int		val_long;

	ret = sstream_read_long(ss, &val_long);
	*val = val_long;
	if (errno == 0 && !(val_long >= INT_MIN && val_long <= INT_MAX))
		errno = ERANGE;
	return (ret);
}
