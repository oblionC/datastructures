#include <stdio.h>

int main()
{
    char string1[1000];
    scanf("%s", string1);
    int stringlen1, i;

    for(stringlen1 = 0; string1[stringlen1] != '\0'; stringlen1++);
    
    char string2[1000];
    for(i = 0; i <= stringlen1; i++)
    {
        string2[i] = string1[i];
    }
    printf("%s", string2);
}