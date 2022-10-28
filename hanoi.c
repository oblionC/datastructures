#include <stdio.h>



void instruction(int n, int src, int dest);
void hanoi(int n, int src, int dest);

int main()
{
    printf("-------------------Tower of hanoi--------------------\n");
    printf("Enter number of discs: ");
    int n;
    scanf("%d", &n);
    hanoi(n, 1, 3);
}

void hanoi(int n, int src, int dest)
{
    if(n > 0)
    {
        int middle;
        for(middle = 1; middle <= 3; middle++)
        {
            if(middle != src && middle != dest) break;
        }
        hanoi(n - 1, src, middle);
        instruction(n, src, dest);
        hanoi(n - 1, middle, dest);
    }
}

void instruction(int n, int src, int dest)
{
    printf("Move disc %d from rod %d to rod %d\n", n, src, dest);
}