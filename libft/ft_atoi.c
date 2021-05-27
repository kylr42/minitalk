#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c > 8 && c < 14) || c == ' ')
		return (1);
	return (0);
}

static	int	ft_ismax(long num)
{
	if (num > 2147483647)
		return (-1);
	if (num < -2147483647)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		neg;
	long	num;

	neg = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = -1;
	while (ft_isdigit(*str))
	{
		if (ft_ismax(num * neg) != 1)
			return (ft_ismax(num * neg));
		num = (num * 10) + (*str - 48);
		str++;
	}
	return (num * neg);
}
