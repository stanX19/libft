/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringstream.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:32:50 by shatan            #+#    #+#             */
/*   Updated: 2024/04/20 17:16:42 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGSTREAM_H
# define STRINGSTREAM_H
# include "common.h"
# include "ft_printf.h"

typedef struct s_stringstream
{
	char		*str;
	char		*pos;
}				t_stringstream;

t_stringstream	*sstream_new(const char *str);
t_stringstream	*sstream_set_str(t_stringstream *ss, const char *str);
char			*sstream_get_str(t_stringstream *ss);
t_stringstream	*sstream_getline(t_stringstream *ss, char **line,
					const char *seps);
t_stringstream	*sstream_read_int(t_stringstream *ss, int *val);
t_stringstream	*sstream_read_long(t_stringstream *ss, long int *val);
t_stringstream	*sstream_read_double(t_stringstream *ss, double *val);
t_stringstream	*sstream_read_long_double(t_stringstream *ss, long double *val);
t_stringstream	*sstream_skip_nchar(t_stringstream *ss, size_t n);
t_stringstream	*sstream_skip_nword(t_stringstream *ss, size_t n,
					const char *seps);
t_stringstream	*sstream_skip_until(t_stringstream *ss, const char *charset);
t_stringstream	*sstream_to_numeric(t_stringstream *ss);
t_stringstream	*sstream_append_str(t_stringstream *ss, const char *word);
t_stringstream	*sstream_reset(t_stringstream *ss);
bool			sstream_eof(t_stringstream *ss);
void			sstream_destroy(t_stringstream *ss);

#endif // STRINGSTREAM