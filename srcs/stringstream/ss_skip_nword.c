/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_skip_nword.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:54:31 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 13:52:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// skips `n` number of words seperated by characters specified in `seps` charset
t_stringstream	*ss_skip_nword(t_stringstream *ss, size_t n,
		const char *seps)
{
	size_t	i;

	if (ss == NULL || ss->pos == NULL)
		return (NULL);
	i = 0;
	while (i < n && ss_read_line(ss, NULL, seps))
	{
		i++;
	}
	return (ss);
}
