#include "stringstream.h"

t_stringstream	*sstream_get_next_long(t_stringstream *ss, long int *val)
{
	if (ss == NULL || *ss->pos == '\0')
	{
		return (false);
	}
	if (errno != 0)
	{
		ft_putstr_fd("Error: Unresolved errno ", 2);
		ft_putnbr_fd(errno, 2);
		ft_putstr_fd("\n", 2);
		return (NULL);
	}
	*val = ft_strtol(ss->pos, &ss->pos, "0123456789");
	if (errno != EINVAL)
		return (ss);
	else
		return (NULL);
}