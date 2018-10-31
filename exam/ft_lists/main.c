#include <stdio.h>
#include <stdlib.h>




typedef struct s_list
{
  void   *data;
 struct s_list *next;
} t_list;

t_list* ft_list_init(void *data);
void ft_push_back(t_list *list_begin, void *data);
void ft_print_lists(t_list *list_begin);

int main()
{
  t_list* list; // creating
  list = NULL; // to NULL
  list = (t_list*)malloc(sizeof(t_list)); // emptying memory
  list->data= "Hello"; // saving data
  printf("%s\n", (char*)list->data);
    // ok?
  //well now functions
  t_list* list_two;

  list_two = ft_list_init("I am list_two");

  printf("%s\n", (char*)list_two->data);

  ft_push_back(list_two, "I am list THREE");

  ft_print_lists(list_two);


  return(0);
}


t_list* ft_list_init(void *data) // Create a new list
{
  t_list* new;

  new = NULL;
  if((new = (t_list*)malloc(sizeof(t_list))))
  {
    new->data = data;
    new->next = NULL;
  }
  return (new);
}

void ft_push_back(t_list *list_begin, void *data) // Add list to a back
{
    t_list* new;

    new = NULL;
    if(list_begin != NULL)
    {
        new = ft_list_init(data);
        list_begin->next = new;
    }
    else
    {
      list_begin = ft_list_init(data);
    }
}

void ft_print_lists(t_list *list_begin)
{
  if (list_begin != NULL)
  {
    while (list_begin != NULL)
    {
      printf("%s\n", (char*)list_begin->data);
      list_begin = list_begin->next;
    }

  }
}
