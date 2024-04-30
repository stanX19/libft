#include "common.h"

bool	ft_isspace_or_null(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ' || c == '\0');
}