int	ft_iterative_factorial(int nb)
{
	unsigned int	val;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	val = 1;
	while (nb)
	{
		val *= (nb);
		nb--;
	}
	return (val);
}

/*
#include <stdio.h>
int	main(void)
{
	int var = 12;
	printf("factorial(%d) := %d", var, ft_iterative_factorial(var));
}
*/
