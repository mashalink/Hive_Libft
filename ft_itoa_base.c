#include "libft.h"

char		*ft_itoa_base(uintmax_t x, int base)
{
	char		*str;
	char		*base_s;
	uintmax_t	nbr;
	int			len;

	len = 0;
	nbr = x;
	base_s = "0123456789abcdef";
	while (nbr)
	{
		nbr /= base;
		len++;
	}
	str = ft_clean_str(len, x);
	while (x > 0)
	{
		str[--len] = base_s[x % base];
		x /= base;
	}
	return (str);
}