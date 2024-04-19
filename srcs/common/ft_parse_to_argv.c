/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_to_argv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:53:57 by shatan            #+#    #+#             */
/*   Updated: 2024/04/18 14:24:15 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_str_to_args(const char *str, int *argc)
{
	char	**ret;

	ret = ft_split(str, ' ');
	*argc = ft_tokens_len(ret);
	return (ret);
}
