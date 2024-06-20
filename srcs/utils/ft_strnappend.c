/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:32:04 by stan              #+#    #+#             */
/*   Updated: 2024/06/20 23:41:37 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if this seg faults, make sure
// n does not count strptr in
// the arguments are actually str
void	ft_strnappend(size_t n, char **strptr, ...)
{
	va_list	argv;

	if (n == 0 || !strptr || !*strptr)
		return ;
	va_start(argv, strptr);
	while (n--)
		ft_str_append(strptr, va_arg(argv, char *));
	va_end(argv);
}
