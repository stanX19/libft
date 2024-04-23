/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:13 by stan              #+#    #+#             */
/*   Updated: 2024/04/23 15:32:23 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// int version of read_long
// errno will be set to ERANGE upon int overflow
t_stringstream	*ss_read_int(t_stringstream *ss, int *val)
{
	t_stringstream	*ret;
	long int		val_long;

	ret = ss_read_long(ss, &val_long);
	*val = val_long;
	if (errno == 0 && !(val_long >= INT_MIN && val_long <= INT_MAX))
	{
		errno = ERANGE;
	}
	return (ret);
}
