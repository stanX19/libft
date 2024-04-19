/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_destory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:00 by stan              #+#    #+#             */
/*   Updated: 2024/04/19 14:10:04 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringstream.h"

void	sstream_destroy(t_stringstream *ss)
{
	if (ss == NULL)
		return ;
	if (ss->str != NULL)
		free(ss->str);
	free(ss);
}
