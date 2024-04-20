/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sstream_add_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:36:41 by shatan            #+#    #+#             */
/*   Updated: 2024/04/20 17:08:55 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// appends str to the stringstream for furthur processing
t_stringstream	*sstream_append_str(t_stringstream *ss, const char *word)
{
	char	*original;

	if (ss == NULL || ss->str == NULL)
		return (NULL);
	original = ss->str;
	ss->str = ft_strjoin(original, word);
	free(original);
	return (ss);
}
