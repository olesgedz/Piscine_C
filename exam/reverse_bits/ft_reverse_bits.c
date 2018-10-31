#include <stdio.h>

void	ft_print_binary(int nbr)
{
	int i;
	int sign;

	sign = 1;
	if(nbr < 0)
		sign = -1;
	i =  8;
	while(i > 0)
	{
		printf("%d", sign * (((nbr >> i) % 2)));
		i--;
	}
	nbr % 2 == 1 ? printf("1") : printf("0");
	//printf(" size - %lu ", sizeof(int));
	printf("\n");
}

int ft_reverse_bits(int nbr)
{
  int i;
  int result;

  i = 8;
  result = 0;
  while(i >= 0)
  {
    result |= ((nbr >> i) & 0b00000001)  << (8 - i);
    //ft_print_binary(nbr >> i);
    i--;
  }

  return (result);
}


int main()
{

  int nbr = 13;
  ft_print_binary(ft_reverse_bits(nbr));

ft_print_binary(nbr);
  return (0);
}
