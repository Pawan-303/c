#include <stdio.h>

void main()
{
    int i=1,n;

    printf("Enter the no : ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
}