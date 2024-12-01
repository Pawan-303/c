#include <stdio.h>

int main()
{
    // pattern to print
    // *
    // **
    // ***

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}