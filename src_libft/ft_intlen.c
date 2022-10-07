#include "../includes/libft.h"

// Returns the number of characters that the number contains.

int	ft_intlen(long long int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
