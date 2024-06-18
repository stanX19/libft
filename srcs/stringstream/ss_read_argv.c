/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:50:48 by shatan            #+#    #+#             */
/*   Updated: 2024/06/18 18:42:59 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream_private.h"

static char	*find_start_of_line(char *newpos)
{
	while (*newpos != '\0' && ft_strchr(WHITESPACE, *newpos))
		newpos++;
	return (newpos);
}

static char	*find_end_of_line(char *newpos)
{
	char	quote;

	quote = '\0';
	while (*newpos != '\0' && (!ft_strchr(WHITESPACE, *newpos)
			|| quote != '\0'))
	{
		if (quote == '\0' && !ft_strchr("\"'", *newpos))
			quote = *newpos;
		else if (quote != '\0' && *newpos == quote)
			quote = '\0';
		newpos++;
	}
	return (newpos);
}

// TODO:
//   add char ft_get_escaped(char c);
//   't' --> '\t'
static void	get_word_helper(char *ret, char **pos, int *i, int *quote)
{
	bool	escape_next;
	char	c;

	escape_next = false;
	c = (*pos)[*i];
	if (c == '\\')
	{
		escape_next = true;
		c = (++(*pos))[*i];
	}
	if (c == '\0')
		return ;
	if (*quote == '\0' && ft_strchr("\"'", c) && !escape_next)
		*quote = c;
	else if (*quote != '\0' && c == *quote && !escape_next)
		*quote = '\0';
	else
	{
		ret[(*i)++] = c;
		return ;
	}
	++(*pos);
}

static char	*get_word(char *pos, size_t max_len)
{
	char	*ret;
	int		i;
	char	quote;

	ret = (char *)ft_calloc(sizeof(char), max_len + 1);
	if (!ret)
		return (NULL);
	quote = '\0';
	i = 0;
	while (pos[i] != '\0' && (!ft_strchr(WHITESPACE, pos[i]) || quote != '\0'))
	{
		get_word_helper(ret, &pos, &i, &quote);
	}
	return (ret);
}

// ss: stringstream object, line: pointer to str, seps: seperating charset
// success	:	return ss,		line is malloced str,	errno = 0
// eof		:	return NULL,	line is NULL,			errno = 0
t_stringstream	*ss_read_argv(t_stringstream *ss, char **line)
{
	char	*start;
	char	*newpos;

	if (line != NULL)
		*line = NULL;
	if (ss_read_precheck(ss))
		return (NULL);
	start = find_start_of_line(ss->pos);
	if (*start == '\0')
		return (NULL);
	newpos = find_end_of_line(start);
	if (line != NULL)
		*line = get_word(start, newpos - start);
	return (ss_read_get_return(ss, newpos));
}
