#include "libft.h"


static void	assign_strjoin(char **ret, const char *s2)
{
	char	*original;

	original = *ret;
	*ret = ft_strjoin(original, s2);
	free(original);
}


char	*ft_tokens_join(const char **tokens, size_t len, const char *sep)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = ft_calloc(sizeof(char), 1);
	assign_strjoin(&ret, tokens[i++]);
	while (i < len)
	{
		assign_strjoin(&ret, sep);
		assign_strjoin(&ret, tokens[i]);
		++i;
	}
	return (ret);
}