/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 22:58:41 by stan              #+#    #+#             */
/*   Updated: 2024/06/20 23:09:04 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(size_t n, ...)
{
	char	*ret;
	va_list	argv;

	if (n == 0)
		return (NULL);
	va_start(argv, n);
	ret = (char *)ft_calloc(sizeof(char), 1);
	while (n--)
	{
		ft_str_append(&ret, va_arg(argv, char *));
	}
	va_end(argv);
	return (ret);
}
