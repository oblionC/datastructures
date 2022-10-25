#include <stdio.h>

int main()
{
    char string[1000];
    int limit, offset;
    printf("Enter a string: ");
    scanf("%s", string);
    printf("Enter the limit and offset: ");
    scanf("%d %d", &limit, &offset);
    for(int i = 0; i < limit; i++) printf("%c", string[offset + i]);
}