/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_get_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:46:54 by shatan            #+#    #+#             */
/*   Updated: 2024/04/18 15:50:34 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

char	*sstream_get_str(t_stringstream *ss)
{
	if (ss == NULL || ss->str == NULL)
	{
		return (NULL);
	}
	return (ft_strdup(ss->str));
}