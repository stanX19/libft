/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_skip_until.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:54:31 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 13:52:55 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// skips until occurance of characters specified in charset
t_stringstream	*ss_skip_to_charset(t_stringstream *ss, const char *charset)
{
	if (ss == NULL || ss->pos == NULL)
		return (NULL);
	while (ft_strchr(charset, *ss->pos) == NULL)
	{
		++ss->pos;
	}
	return (ss);
}
