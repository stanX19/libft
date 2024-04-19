/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_set_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:46:28 by shatan            #+#    #+#             */
/*   Updated: 2024/04/19 13:07:00 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

t_stringstream	*sstream_set_str(t_stringstream *ss, const char *str)
{
	if (ss == NULL)
	{
		return (NULL);
	}
	free(ss->str);
	ss->str = ft_strdup(str);
	ss->pos = ss->str;
	return (ss);
}
