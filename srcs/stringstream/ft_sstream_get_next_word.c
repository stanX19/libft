/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_get_next_word.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:50:48 by shatan            #+#    #+#             */
/*   Updated: 2024/04/19 11:55:49 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

t_stringstream	*sstream_get_next_line(t_stringstream *ss, char **word, const char *sep)
{
	char	*start;

	if (ss == NULL || *ss->pos == '\0' || ss->flag != 0)
		return (NULL);
	while (*ss->pos && ft_strchr(sep, *ss->pos))
		ss->pos++;
	if (*ss->pos == '\0')
	{
		ss->flag = EOF;
		return (NULL);
	}
	start = ss->pos++;
	while (*ss->pos && !ft_strchr(sep, *ss->pos))
		ss->pos++;
	*word = ft_strndup(start, ss->pos - start);
	return (ss);
}
