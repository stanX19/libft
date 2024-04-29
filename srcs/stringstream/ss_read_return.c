#include "stringstream_private.h"

// success	: t_stringstream pointer,	errno=0
// eof		: NULL,						errno=0
// fail		: NULL,						errno=EINVAL
t_stringstream *ss_read_return(t_stringstream *ss, char *newpos)
{
	if (errno == EINVAL && *newpos == '\0')
	{
		errno = 0;
		return (NULL);
	}
	ss_update_pos(ss, newpos);
	if (errno == 0)
		return (ss);
	return (NULL);
}