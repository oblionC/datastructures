#include <stdio.h>
#include <stdlib.h>



typedef struct node
{
    int value;
    struct node* next;
}
node;


int main()
{
    node* list_start = NULL;
    int n;
    scanf("%d", &n);
    int values_to_prepend[n];
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d", &values_to_prepend[i]);
    }
    for(int i = 0; i < n; i++)
    {
        node* next_node = malloc(sizeof(node));
        next_node -> value = values_to_prepend[i];
        next_node -> next = list_start;
        list_start = next_node;
    }
    for(node* current_node = list_start; current_node != NULL; current_node = current_node -> next)
    {
        printf("%d ", current_node -> value);
    }

}