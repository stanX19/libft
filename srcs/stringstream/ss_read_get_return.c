#include "stringstream_private.h"

// success	: t_stringstream pointer,	errno=0
// eof		: NULL,						errno=0
// fail		: NULL,						errno=EINVAL
t_stringstream *ss_read_get_return(t_stringstream *ss, char *newpos)
{
	t_stringstream	*cpy;
	bool			eof;

	cpy = ss_copy(ss);
	eof = ss_eof(ss_skip_if(cpy, ft_isspace));
	ss_destroy(cpy);
	if (errno == EINVAL && eof)
	{
		errno = 0;
		return (NULL);
	}
	ss_update_pos(ss, newpos);
	if (errno == 0)
		return (ss);
	return (NULL);
}