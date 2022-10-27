#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
} 
node;

void append(node** list_start);
void prepend(node** list_start);
void insert(node** list_start, int list_size);
void delete(node* list_start, int list_size);
void printlist(node** list_start);

int main()
{
    node* list_start = NULL;
    int list_size = 0;

    printf("Welcome to the linked list app by Tanmay!\n\n");
    while(1)
    {
        int input;
        printf("What do you wish to do with the list: \n 1) Append a value \n 2) Prepend a value \n 3) Delete a value \n 4) Insert a value \n 5) Print the list \n 6) End program \n\n");
        scanf("%d", &input);
        switch(input)
        {
            case 1: append(&list_start); list_size++; break;
            case 2: prepend(&list_start); list_size++; break;
            case 3: delete(list_start, list_size); list_size--; break;
            case 4: insert(&list_start, list_size); list_size++; break;
            case 5: printlist(&list_start); break;
            case 6: return 0; break;
            default: printf("Input isn't between 1 and 6\n");
        }
    }
}

void prepend(node** list_start)
{
    int value;
    printf("\nEnter value to prepend: ");
    scanf("%d", &value);
    node* new = malloc(sizeof(node));
    new -> value = value;
    new -> next = *list_start;
    *list_start = new;
    printf("Value prepended!\n\n");
}

void append(node** list_start)
{
    int val;
    printf("\nEnter value to append: ");
    scanf("%d", &val);
    node* new = malloc(sizeof(node));
    new -> value = val;
    new -> next = NULL;
    if(*list_start == NULL)
    {
        *list_start = new;
        printf("Value appended!\n\n");
        return;
    }
    node* current_node = *list_start;
    while(current_node -> next != NULL)
    {
        current_node = current_node -> next;
    }
    current_node -> next = new;
    printf("Value appended!\n\n");
}

void printlist(node** list_start)
{
    node* current_node = *list_start; 
    printf("\nCurrent list: ");
    while(current_node != NULL)
    {
        printf("%d ", current_node -> value);
        current_node = current_node -> next;
    }
    printf("\n");
}

void insert(node** list_start, int list_size)
{
    
    int index, value;
    printf("\n Enter the position and value: ");
    scanf("%d %d", &index, &value);
    if(index > list_size + 1)
    {
        printf("Position is larger then the list!\n\n");
        return;
    }
    node* new = malloc(sizeof(node));
    node* current_node = *list_start;
    new -> value = value;
    if(index == 1)
    {
        new -> next = *list_start;
        *list_start = new;
        printf("Inserted!\n\n");
        return;
    }
    if(index == list_size + 1)
    {
        new -> next = NULL;
        while(current_node -> next != NULL)
        {
            current_node = current_node -> next;
        }
        current_node -> next = new;
        printf("Inserted!\n\n");
        return;
    }
    
    int i;
    for(i = 1; i < index - 1; i++)
    {
        current_node = current_node -> next;
    }
    new -> next = current_node -> next;
    current_node -> next = new;
    printf("Inserted!\n\n");
}

void delete(node* list_start, int list_size)
{
    int index, i;
    printf("\nEnter the position of value to delete: ");
    scanf("%d", &index);
    if(index > list_size)
    {
        printf("Position is larger then the list!\n\n");
        return;
    }
    if(index == 1)
    {
        node* temp = list_start;
        *list_start = *list_start -> next;
        free(temp);
        printf("Deleted!\n\n");
    }
    node* current_node;
    node* temp;
    for(current_node = list_start, i = 1; i < index; current_node = current_node -> next, i++);
    temp = current_node -> next;
    current_node -> next = current_node -> next -> next;
    free(temp);
    printf("Deleted!\n\n");
}

