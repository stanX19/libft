/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:13 by stan              #+#    #+#             */
/*   Updated: 2024/04/29 13:37:59 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream_private.h"

static char	strtoc(char *nptr, char **endptr)
{
	char	c;

	c = '\0';
	while (ft_isspace(*nptr))
	{
		nptr++;
	}
	if (*nptr)
	{
		c = *nptr;
		nptr++;
	}
	if (endptr)
		*endptr = nptr;
	return (c);
}

t_stringstream	*ss_read_char(t_stringstream *ss, char *cptr)
{
	char	*newpos;

	if (ss_read_precheck(ss))
		return (NULL);
	*cptr = strtoc(ss->pos, &newpos);
	return (ss_read_return(ss, newpos));
}
