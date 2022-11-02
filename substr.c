#include <stdio.h>

int main()
{
    char string1[1000];
    scanf("%s", string1);
    int stringlen1, i;
    for(stringlen1 = 0; *(string1 + stringlen1) != '\0'; stringlen1++);
    char string2[1000];
    for(i = 0; i <= stringlen1; i++)
    {
        *(string2 + i) = *(string1 + i);
    }
    printf("Copied string: %s\n\n", string2);
    int limit, offset;
    printf("Enter the offset and limit: ");
    while(1)
    {
        scanf("%d %d", &offset, &limit);
        if(offset > stringlen1) 
            printf("Offset greater than string length, try again: ");
        else break;
    }
    printf("Substring: ");
    for(int i = 0; i < limit && *(string2 + offset + i) != '\0'; i++) 
        printf("%c", *(string2 + offset + i));
}