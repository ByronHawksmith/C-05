int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	int var = 12;
	printf("factorial(%d) := %d", var, ft_recursive_factorial(var));
}
*/
