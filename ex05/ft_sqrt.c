int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	sqrt = 0;
	while (sqrt <= nb)
	{
		i++;
		sqrt = i * i;
	}
	i -= 1;
	sqrt = i * i;
	if (sqrt == nb)
		return (i);
	else
		return (0);
}

/*
int	main(void)
{
	printf("%d", ft_sqrt(144));
}
*/
