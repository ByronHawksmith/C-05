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

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while ((i <= sqrt) && (nb % i != 0))
		i++;
	return (i > sqrt);
}

/*
#include <stdio.h>
int main(void)
{
	printf("0: %d\n", ft_is_prime(0));
	printf("1: %d\n", ft_is_prime(1));
	printf("2: %d\n", ft_is_prime(2));
	printf("3: %d\n", ft_is_prime(3));
	printf("4: %d\n", ft_is_prime(4));
	printf("5: %d\n", ft_is_prime(5));
	printf("239: %d\n", ft_is_prime(239));
	printf("271: %d\n", ft_is_prime(271));
	printf("300: %d\n", ft_is_prime(300));
}
*/
