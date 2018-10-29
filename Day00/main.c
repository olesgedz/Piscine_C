

#include <stdio.h>

void	ft_print_binary(int nbr)
{
	int i;
	int sign;

	sign = 1;
	if(nbr < 0)
		sign = -1;
	i = sizeof(int) * 8 - 1;
	while(i > 0)
	{
		printf("%d", sign * (((nbr >> i) % 2)));
		i--;
	}
	nbr % 2 == 1 ? printf("1") : printf("0");
	//printf(" size - %lu ", sizeof(int));
	printf("\n");
}

int	main()
{
	int nbr = 1;
	printf("%d", nbr);
	nbr = nbr << 1;
	nbr = nbr >> 1;
	printf("%d\n", nbr);
	printf("%d\n", ~nbr);

	ft_print_binary(1);
	ft_print_binary(-1);
	printf("%d\n", 0b11111111111111111111111111111010);
	return(0);
}
