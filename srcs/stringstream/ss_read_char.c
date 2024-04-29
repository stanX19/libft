/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_read_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:13 by stan              #+#    #+#             */
/*   Updated: 2024/04/29 23:23:39 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream_private.h"

// static char	strtoc(char *nptr, char **endptr)
// {
// 	char	c;

// 	c = '\0';
// 	while (ft_isspace(*nptr))
// 	{
// 		nptr++;
// 	}
// 	if (*nptr)
// 	{
// 		c = *nptr;
// 		nptr++;
// 	}
// 	if (endptr)
// 		*endptr = nptr;
// 	return (c);
// }

t_stringstream	*ss_read_char(t_stringstream *ss, char *cptr)
{
	char	*newpos;

	*cptr = '\0';
	if (ss_read_precheck(ss))
		return (NULL);
	while (ft_isspace(*newpos))
	{
		newpos++;
	}
	if (*newpos)
	{
		*cptr = *newpos;
		newpos++;
	}
	return (ss_read_get_return(ss, newpos));
}
