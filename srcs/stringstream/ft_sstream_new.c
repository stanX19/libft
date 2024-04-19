/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:46:32 by shatan            #+#    #+#             */
/*   Updated: 2024/04/19 11:55:49 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

t_stringstream	*sstream_new(const char *str)
{
	t_stringstream *ss;

	ss = (t_stringstream *)malloc(sizeof(t_stringstream));
	if (ss == NULL)
		return (NULL);
	ss->str = ft_strdup(str);
	ss->pos = ss->str;
	ss->flag = 0;
	return (ss);
}
