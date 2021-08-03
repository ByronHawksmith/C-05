int	fibonacci(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (fibonacci(n - 1) + fibonacci(n - 2));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fibonacci(index));
}

/*
#include <stdio.h>
int	main(void)
{
	int n;

	n = 16;
	printf("Fibonacci(%d): %d", n, ft_fibonacci(n));
}
*/
