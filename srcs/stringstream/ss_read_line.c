/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:50:48 by shatan            #+#    #+#             */
/*   Updated: 2024/04/29 13:03:09 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream_private.h"

// ss: stringstream object
// line: pointer to str pointer
// seps: seperating charset
t_stringstream	*ss_read_line(t_stringstream *ss, char **line, const char *seps)
{
	char	*start;

	if (ss == NULL || ss->pos == NULL || *ss->pos == '\0')
		return (NULL);
	while (*ss->pos != '\0' && ft_strchr(seps, *ss->pos))
		ss->pos++;
	if (*ss->pos == '\0')
		return (NULL);
	start = ss->pos++;
	while (*ss->pos != '\0' && !ft_strchr(seps, *ss->pos))
		ss->pos++;
	if (line != NULL)
		*line = ft_strndup(start, ss->pos - start);
	return (ss);
}
