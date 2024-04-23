/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_skip_nchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:54:35 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 13:52:47 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// skips n number of characters from current position
t_stringstream	*ss_skip_nchar(t_stringstream *ss, size_t n)
{
	size_t	i;

	if (ss == NULL || ss->pos == NULL)
		return (NULL);
	i = 0;
	while (i < n && *ss->pos)
	{
		++ss->pos;
		++i;
	}
	return (ss);
}
