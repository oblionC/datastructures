#include <stdio.h>

int main()
{
    char string1[1000], string2[1000];
    printf("Enter a string: ");
    scanf("%s", string1);
    printf("Enter another string: ");
    scanf("%s", string2);
    int stringlen1, stringlen2;
    for(stringlen1 = 0; *(string1 + stringlen1) != '\0'; stringlen1++);
    for(stringlen2 = 0; *(string2 + stringlen2) != '\0'; stringlen2++);
    printf("Length of string 1 and string 2: %d and %d\n", stringlen1, stringlen2);

    char concatanate[1000];
    int conindex, i;
    for(conindex = 0; conindex < stringlen1; conindex++) *(concatanate + conindex) = *(string1 + conindex);
    for(i = 0; i < stringlen2; i++, conindex++) *(concatanate + conindex) = *(string2 + i);
    *(concatanate + conindex) = '\0';
    printf("Concatanated string: %s", concatanate);
}