#include "libft.h"

void	*ft_memdup(void *ptr, size_t n)
{
	void *ret;

	if (ptr == NULL)
		return (NULL);
	ret = malloc(n);
	ft_memcpy(ret, ptr, n);
	return (ret);
}
