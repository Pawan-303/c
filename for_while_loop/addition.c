#include <stdio.h>

int main()
{
    int i,n,sum=0,num;
    printf("How many numbers sum do you want : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum of %d numbers is : %d",n,sum);
    return 0;
}