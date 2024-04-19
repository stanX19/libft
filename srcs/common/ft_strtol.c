/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:10:38 by stan              #+#    #+#             */
/*   Updated: 2024/04/18 18:39:58 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ret_is_invalid(long ret, long digit, int sign)
{
	long	ret_max;
	long	digit_max;

	ret_max = LONG_MAX / 10;
	digit_max = LONG_MAX % 10 + (sign < 0);
	return (ret > ret_max || (ret == ret_max && digit > digit_max));
}

static bool	get_digit(t_base base, char **str, long *val)
{
	char	*pos;
	char	c;

	c = **str;
	pos = ft_strchr(base.str, c);
	*val = (pos - base.str) * (pos != NULL);
	*str += (pos != NULL);
	return (pos != NULL && c);
}

static long	get_val(char **str, int sign, t_base base)
{
	long	ret;
	long	digit;

	ret = 0;
	digit = -1;
	while (get_digit(base, str, &digit))
	{
		if (ret_is_invalid(ret, digit, sign))
			errno = ERANGE;
		else
			ret = (ret * base.nbr) + digit;
	}
	if (errno == ERANGE)
	{
		if (sign > 0)
			return (LONG_MAX);
		else
			return (LONG_MIN);
	}
	if (digit < 0)
		errno = EINVAL;
	return (sign * ret);
}

long	ft_strtol(const char *nptr, char **endptr, const char *_base)
{
	int		sign;
	t_base	base;
	long	ret;
	char	*str;

	sign = 1;
	str = (char *)nptr;
	while (ft_isspace(*str))
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	base = ft_init_base(_base);
	ret = get_val(&str, sign, base);
	if (endptr != NULL && errno == EINVAL)
		*endptr = (char *)nptr;
	else if (endptr != NULL)
		*endptr = str;
	return (ret);
}
