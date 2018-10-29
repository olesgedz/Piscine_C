#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void ft_print_matrix(int** matrix)
{
  int j;
  int k;

  j = 1;
  k = 0;
  while(j < 10)
  {
    while(k < 9)
    {
      printf(" %d", matrix[j][k]);
      k++;
    }
      printf("\n");
    k = 0;
    j++;
  }
}

int** ft_get_array(char** argv)
{

  int** matrix = (int**)malloc(sizeof(int*) * 10);
  int j;
  int k;

  j = 1;
  k = 0;
  while(j < 10)
  {
    matrix[j] = (int*)malloc(sizeof(int) * 9);
    while(k < 9)
    {
      if(argv[j][k] == '.')
        matrix[j][k] = 0;
      else
      {
        printf("%d\n", argv[j][k] - '0');
        matrix[j][k] = argv[j][k] - '0';
      }
      k++;
    }
    k = 0;
    j++;
  }
  return (matrix);
}





int main(int argc, char** argv)
{
  if(argc != 10)
    return(0);
  int** matrix = ft_get_array(argv);
  ft_print_matrix(matrix);
  ft_solve_sudoku(matrix, 0);

  printf("\nHello!\n");
  return (0);
}

/*


*/
