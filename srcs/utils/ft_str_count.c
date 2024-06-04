/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:02:26 by shatan            #+#    #+#             */
/*   Updated: 2024/06/04 15:34:21 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_count(const char *str, char target)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += (*str == target);
		str++;
	}
	return (count);
}
int	ft_str_count_charset(char *str, const char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += (ft_strchr(charset, *str) != NULL);
		str++;
	}
	return (count);
}
