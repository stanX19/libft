#include "libft.h"

long	ft_pow(long nu, long exp)
{
	long ret;
	
	ret = 1;
	if (exp == 0)
		return (1);
	while (exp--)
	{
		ret *= nu;
	}
	return (ret);
}