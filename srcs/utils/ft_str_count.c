/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:02:26 by shatan            #+#    #+#             */
/*   Updated: 2024/06/04 15:06:52 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_count(const char *str, char target)
{
	int	count;

	while (*str)
	{
		count += (*str == target);
		str++;
	}
	return (count);
}
int	ft_str_count_charset(char *str, char *charset)
{
	int	count;

	while (*str)
	{
		count += (ft_strchr(charset, *str) != NULL);
		str++;
	}
	return (count);
}
