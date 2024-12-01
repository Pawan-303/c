#include <stdio.h>

int main()
{
    int l;

    // pattern:
    // 1
    // 22
    // 333
    // 4444
    // 55555

    printf("How many lines pattern you want : ");
    scanf("%d",&l);
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}