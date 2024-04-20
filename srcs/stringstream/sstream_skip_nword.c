/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sstream_skip_nword.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:54:31 by shatan            #+#    #+#             */
/*   Updated: 2024/04/20 16:39:06 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// skips `n` number of words seperated by characters specified in `seps` charset
t_stringstream	*sstream_skip_nword(t_stringstream *ss, size_t n,
		const char *seps)
{
	size_t	i;

	if (ss == NULL || ss->pos == NULL)
		return (NULL);
	i = 0;
	while (i < n && sstream_getline(ss, NULL, seps))
	{
		i++;
	}
	return (ss);
}