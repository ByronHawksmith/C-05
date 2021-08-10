int	ft_sqrt(int nb)
{
	int	i;
	int	int_max_sqrt;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	int_max_sqrt = 46341;
	while (i <= nb / 2 && i <= int_max_sqrt)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(144));
}
*/
