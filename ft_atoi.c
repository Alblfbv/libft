#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1; 
	nb = 0;
	while (nptr[i] < 38)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] > '0' && nptr[i] < '9')
	{
		nb = nb * 10 + nptr[i] - 48;
		i++;
	}
	return (nb * sign);
}

int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d", atoi(argv[1]));
	return (0);
}
