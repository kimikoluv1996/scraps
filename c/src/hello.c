#include <stdio.h>

void printN(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", i);
        printf("\n");
    }
}

int main()
{
    int moi = 6;
    printN(moi);
}