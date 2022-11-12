#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node* next;
}node;

void pop(node** list_start);
void push(node** list_start);
void printstack(node* list_start);

int main()
{
    node* list_start = NULL;
    while(1)
    {
        int inp;
        printf("\nWhat do you want to do with the stack:\n1) pop\n2) push\n3) print stack\n4) exit\n>");
        scanf("%d", &inp);
        switch(inp)
        {
            case 1: pop(&list_start); break;
            case 2: push(&list_start); break;
            case 3: printstack(list_start); break;
            case 4: printf("Closing program...\n"); return 0; break;
        }
    }
}

void printstack(node* list_start)
{
    node* current_node = list_start;
    printf("Items in stack (top to bottom): ");
    while(current_node != NULL)
    {
        printf("%d ", current_node -> val);
        current_node = current_node -> next;
    }
}

void pop(node** list_start)
{
    if(*list_start == NULL)
    {
        printf("No values in stack!");
        return;
    }
    node* current_node = *list_start;
    printf("Popped value: %d", current_node -> val);
    *list_start = current_node -> next;
    free(current_node);
}

void push(node** list_start)
{
    node* new = malloc(sizeof(node));
    printf("Value to push: ");
    scanf("%d", &(new -> val));
    new -> next = *list_start;
    *list_start = new;
    printf("Pushed!\n");
}