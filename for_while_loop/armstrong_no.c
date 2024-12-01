#include <stdio.h>

int main()
{
    int n,i,digit=0,sum=0,rem;
    printf("Enter the no: ");
    scanf("%d",&n);

    for(int j=n;j!=0;j=j/10)
    {
        if(j/10!=0 || j!=0)
        {
            digit+=1;
        }
    }
    printf("no of digit= %d",digit);
    for(i=n;i!=0;i=i/10)
    {
        rem=i%10;
        sum+=rem*rem*rem;
    }
    if(sum==n)
    {
        printf("\nYes this is Armstrong number");
    }
    else
    {
        printf("\nNo,this is not a Armstrong number");
    }
    
return 0;
}