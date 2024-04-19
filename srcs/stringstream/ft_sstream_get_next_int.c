/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_get_next_int.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:13 by stan              #+#    #+#             */
/*   Updated: 2024/04/19 14:10:22 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

t_stringstream	*sstream_get_next_int(t_stringstream *ss, int *val)
{
	t_stringstream	*ret;
	long int		val_long;

	ret = sstream_get_next_long(ss, &val_long);
	*val = val_long;
	if (errno == 0 && val_long >= INT_MIN && val_long <= INT_MAX)
		errno = ERANGE;
	return (ret);
}
