#include <stdio.h>

int main()
{
    int i,n,fact=1;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("Factorial of %d is : ",n);
    for (i=n;i>=1;i--){
        fact*=i;
    }
    printf("%d\n",fact);
    return 0;
}