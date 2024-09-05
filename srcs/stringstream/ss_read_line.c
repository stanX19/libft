/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:50:48 by shatan            #+#    #+#             */
/*   Updated: 2024/09/05 16:00:13 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream_private.h"

static char	*find_start_of_line(char *newpos, const char *seps)
{
	while (*newpos != '\0' && ft_strchr(seps, *newpos))
		newpos++;
	return (newpos);
}

static char	*find_end_of_line(char *newpos, const char *seps)
{
	while (*newpos != '\0' && !ft_strchr(seps, *newpos))
		newpos++;
	return (newpos);
}

/**
ss_read_line - Reads the next line from using specified separators.
@ss: Pointer to the stringstream object.
@line: Pointer to a char* where the read line will be stored (allocated by the function).
@seps: A string containing the separator characters used to split lines.

Return:
  - On success: Returns the updated stringstream object, *line will point to the 
                newly allocated string containing the extracted line, and errno = 0.
  - On end-of-file (EOF): Returns NULL, *line will be set to NULL, and errno = 0.
 */

t_stringstream	*ss_read_line(t_stringstream *ss, char **line, const char *seps)
{
	char	*start;
	char	*newpos;

	if (line != NULL)
		*line = NULL;
	if (ss_read_precheck(ss))
		return (NULL);
	start = find_start_of_line(ss->pos, seps);
	if (*start == '\0')
		return (NULL);
	newpos = find_end_of_line(start + 1, seps);
	if (line != NULL)
		*line = ft_strndup(start, newpos - start);
	return (ss_read_get_return(ss, newpos));
}