

// returns a pointer to a new string that is a duplicate 
// of string s. Duplicate's length equals n.

#include "../includes/libft.h"

char	*ft_strndup(const char *str, int n)
{
	char	*dup;
	size_t	i;

	i = 0;
	if (!(dup = ft_strnew(n)))
		return (NULL);
	while (str[i] && i < (size_t)n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}