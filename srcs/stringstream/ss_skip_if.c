#include "stringstream.h"

// skips characters marked as cond by f
static t_stringstream	*ss_skip(t_stringstream *ss, bool (*f)(int), bool cond)
{
	char	*newpos;

	newpos = ss->pos;
	if (ss == NULL || newpos == NULL)
		return (NULL);
	while (*newpos && f(*newpos) == cond)
		++newpos;
	ss_update_pos(ss, newpos);
	return (ss);
}

// skips characters marked as true by f
t_stringstream	*ss_skip_if(t_stringstream *ss, bool (*f)(int))
{
	return (ss_skip(ss, f, true));
}

// skips until characters marked as true by f
t_stringstream	*ss_skip_if_not(t_stringstream *ss, bool (*f)(int))
{
	return (ss_skip(ss, f, false));
}
