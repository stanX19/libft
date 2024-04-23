/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:46:32 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 13:52:19 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

// creates stringstring from str, the stored version is a copy from strdup
t_stringstream	*ss_new(const char *str)
{
	t_stringstream	*ss;

	ss = (t_stringstream *)malloc(sizeof(t_stringstream));
	if (ss == NULL)
		return (NULL);
	ss->str = ft_strdup(str);
	if (!ss->str)
	{
		free(ss);
		return (NULL);
	}
	ss->pos = ss->str;
	return (ss);
}
