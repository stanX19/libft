/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_skip_non_numeric.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:54:31 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 13:52:49 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// skips until occurance of numeric characters "0123456789+-."
t_stringstream	*ss_skip_to_numeric(t_stringstream *ss)
{
	if (ss == NULL || ss->pos == NULL)
		return (NULL);
	while (*ss->pos != '\0' && !ft_isnumeric(ss->pos))
	{
		++ss->pos;
	}
	return (ss);
}
