#include "stringstream.h"


// success	: t_stringstream pointer,	val=long,				errno=0
// overflow	: t_stringstream pointer,	val=LONG_MAX/LONG_MIN,	errno=ERANGE
// no read	: NULL,						val=0,					errno=EINVAL
t_stringstream	*sstream_get_next_long(t_stringstream *ss, long int *val)
{
	if (ss == NULL || *ss->pos == '\0')
	{
		return (NULL);
	}
	if (errno != 0)
	{
		ft_printf("Error: Unresolved error. errno %i\n", errno);
		return (NULL);
	}
	*val = ft_strtol(ss->pos, &ss->pos, "0123456789");
	if (errno != EINVAL)
		return (ss);
	else
		return (NULL);
}