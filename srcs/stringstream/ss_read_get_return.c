#include "stringstream_private.h"

static bool	ss_eof_after_space(t_stringstream *ss)
{
	char	*pos;

	pos = ss->pos;
	while (ft_isspace(*pos))
	{
		++pos;
	}
	return (*pos == '\0');
}

// success	: t_stringstream pointer,	errno=0
// eof		: NULL,						errno=0
// fail		: NULL,						errno=EINVAL
t_stringstream	*ss_read_get_return(t_stringstream *ss, char *newpos)
{
	if (errno == EINVAL && ss_eof_after_space(ss))
	{
		errno = 0;
		return (NULL);
	}
	ss_update_pos(ss, newpos);
	if (errno == 0)
		return (ss);
	return (NULL);
}
