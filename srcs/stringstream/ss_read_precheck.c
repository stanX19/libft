#include "stringstream_private.h"

// 0	: ok
// 1	: fail
int	ss_read_precheck(t_stringstream *ss)
{
	if (ss == NULL || ss->pos == NULL || *ss->pos == '\0')
	{
		return (1);
	}
	if (errno != 0)
	{
		ft_printf("Error: Unresolved error. errno %i\n", errno);
		return (1);
	}
	return 0;
}