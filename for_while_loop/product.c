#include <stdio.h>

int main()
{
    int prod = 1, n;
    char choice;
start:
    printf("To continue press \"y\", to exit press \"n\" : ");
    scanf(" %c", &choice);

    while (choice == 'y')
    {
        printf("Enter the no : ");
        scanf("%d", &n);
        prod *= n;
        goto start;
    }
    printf("Product of given no's is : %d", prod);
    return 0;
}