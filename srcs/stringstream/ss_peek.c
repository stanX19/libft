#include "stringstream_private.h"

char	ss_peek(t_stringstream *ss)
{
	if (!ss || !ss->pos)
		return ('\0');
	return (*ss->pos);
}
