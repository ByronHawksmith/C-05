int	ft_iterative_power(int nb, int power)
{
	int	val;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	val = nb;
	while (power > 1)
	{
		val *= nb;
		power--;
	}
	return (val);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	int pow = 0;
	printf("%d ^ %d: %d", nb, pow, ft_iterative_power(nb, pow));
}
*/
