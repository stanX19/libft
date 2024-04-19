/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringstream.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stan <shatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:50:34 by shatan            #+#    #+#             */
/*   Updated: 2024/04/19 13:36:12 by stan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGSTREAM_H
# define STRINGSTREAM_H
# include "common.h"
# include "ft_printf.h"

typedef struct	s_stringstream
{
	char	*str;
	char	*pos;
}				t_stringstream;

t_stringstream	*sstream_new(const char *str);
t_stringstream	*sstream_set_str(t_stringstream *ss, const char *str);
char			*sstream_get_str(t_stringstream *ss);
t_stringstream	*sstream_get_next_word(t_stringstream *ss, char **word, const char *sep);
t_stringstream	*sstream_get_next_int(t_stringstream *ss, int *val);
t_stringstream	*sstream_get_next_long(t_stringstream *ss, long int *val);
t_stringstream	*sstream_add_word(t_stringstream *ss, const char *word);
t_stringstream	*sstream_add_long(t_stringstream *ss, long val);
void			sstream_destory(t_stringstream *ss);

#endif // STRINGSTREAM