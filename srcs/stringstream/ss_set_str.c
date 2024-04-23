/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_set_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:46:28 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 13:52:38 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// reassigns str for stringstream
t_stringstream	*ss_setstr(t_stringstream *ss, const char *str)
{
	if (ss == NULL)
	{
		return (NULL);
	}
	if (ss->str != str)
	{
		if (ss->str != NULL)
			free(ss->str);
		ss->str = ft_strdup(str);
	}
	ss->pos = ss->str;
	return (ss);
}
