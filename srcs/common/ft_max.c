#include "libft.h"

long	ft_max(long a, long b)
{
	return ((a > b) * a + (a <= b) * b);
}