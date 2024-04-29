
#include "stringstream_private.h"

// creates a copy with same string and position
t_stringstream	*ss_copy(t_stringstream	*ss)
{
	t_stringstream	*copy;

	copy = (t_stringstream *)malloc(sizeof(t_stringstream));
	if (copy == NULL)
		return (NULL);
	copy->str = ft_strdup(ss->str);
	if (!copy->str)
	{
		free(copy);
		return (NULL);
	}
	copy->pos = copy->str + (ss->pos - ss->str);
	copy->prev_pos = copy->pos + (ss->prev_pos - ss->str);
	return (copy);
}