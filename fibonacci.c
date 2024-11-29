#include<stdio.h>

int main()
{
    int fv,sv,nv,n;
    printf("Enter the first value :");
    scanf("%d",&fv);
    printf("Enter the second value :");
    scanf("%d",&sv);
    printf("How many numbers you want in fibonacci series : ");
    scanf("%d",&n);
    printf("%d %d ",fv,sv);
    for (int i=3;i<=n;i++)
    {
        nv=fv+sv;
        printf("%d ",nv);
        fv=sv;
        sv=nv;
    }
    return 0;
}