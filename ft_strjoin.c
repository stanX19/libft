/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:09:28 by stan              #+#    #+#             */
/*   Updated: 2024/03/04 18:39:56 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	retsize;

	retsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = malloc(sizeof(char) * retsize);
	if (!ret)
		return (0);
	ret[0] = 0;
	ft_strlcat(ret, s1, retsize);
	ft_strlcat(ret, s2, retsize);
	return (ret);
}
