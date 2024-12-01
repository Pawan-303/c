#include <stdio.h>

int main()
{
    int i,n,start;
    printf("How many natural nos you want : ");
    scanf("%d",&n);
    printf("from where to start : ");
    scanf("%d",&start);

    for (i=0;i<n;i++)
    {
        if(i==0){
            printf("%d ",start);
            continue;
        }
        printf("%d ",start+i);
    }
    return 0;
}