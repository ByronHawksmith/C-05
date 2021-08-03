int	ft_recursive_power(int nb, int power)
{
	int	val;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	int pow = 0;
	printf("%d ^ %d: %d", nb, pow, ft_recursive_power(nb, pow));
}
*/
