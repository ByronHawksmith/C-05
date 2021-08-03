// Tail recursive
int	fibonacci(int n, int a, int b)
{
	if (n == 0)
		return (a);
	if (n == 1)
		return (b);
	return (fibonacci(n - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fibonacci(index, 0, 1));
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
