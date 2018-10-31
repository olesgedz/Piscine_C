#include <stdio.h>
#include <stdlib.h>


typedef struct s_list
{
  void   *data;
 struct s_list *next;
} t_list;

int main()
{
  t_list* list;
  list = NULL;
  list = (t_list*)malloc(sizeof(t_list));
  list->data= "Hello";



  printf("%s", (char*)list->data);
  return(0);
}
