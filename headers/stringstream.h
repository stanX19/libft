/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringstream.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:32:50 by shatan            #+#    #+#             */
/*   Updated: 2024/04/23 13:53:56 by shatan           ###   ########.fr       */
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

t_stringstream	*ss_new(const char *str);
t_stringstream	*ss_setstr(t_stringstream *ss, const char *str);
char			*ss_getstr(t_stringstream *ss);
t_stringstream	*ss_read_line(t_stringstream *ss, char **line,
					const char *seps);
t_stringstream	*ss_read_char(t_stringstream *ss, char *cptr);
t_stringstream	*ss_read_int(t_stringstream *ss, int *val);
t_stringstream	*ss_read_long(t_stringstream *ss, long int *val);
t_stringstream	*ss_read_double(t_stringstream *ss, double *val);
t_stringstream	*ss_read_long_double(t_stringstream *ss, long double *val);
t_stringstream	*ss_skip_nchar(t_stringstream *ss, size_t n);
t_stringstream	*ss_skip_nword(t_stringstream *ss, size_t n,
					const char *seps);
t_stringstream	*ss_skip_to_charset(t_stringstream *ss, const char *charset);
t_stringstream	*ss_skip_to_numeric(t_stringstream *ss);
t_stringstream	*ss_append_to_str(t_stringstream *ss, const char *word);
t_stringstream	*ss_reset(t_stringstream *ss);
bool			ss_eof(t_stringstream *ss);
void			ss_destroy(t_stringstream *ss);

#endif // STRINGSTREAM