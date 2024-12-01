#include <stdio.h>

int main()
{
    int n,sum=0,rem;

    printf("Enter the no : ");
    scanf("%d",&n);

    for(int i=n;i!=0;i=i/10)
    {
        rem=i%10;
        sum=sum*10+rem;
    }
    printf("The reverse no of %d is = %d",n,sum);
    return 0;
}