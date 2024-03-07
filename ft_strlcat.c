/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:34:03 by stan              #+#    #+#             */
/*   Updated: 2024/03/07 09:58:04 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	if (!dst && dstsize == 0)
		return (0);
	i = 0;
	dlen = ft_strlen(dst);
	if (dstsize < dlen + 1)
		return (dstsize + ft_strlen(src));
	while (i < (dstsize - dlen - 1) && src[i])
	{
		dst[i + dlen] = src[i];
		++i;
	}
	dst[i + dlen] = '\0';
	return (dlen + ft_strlen(src));
}
