#include <stdio.h>

int main()
{
    int milk, cost, water, sugar, order, pay, m, w, s, mr, wr, sr, flag, totalcost, change;
    milk = 80;
    water = 100;
    sugar = 50;
    cost = 10;
    flag = 1;
    // requirement for making 1 cup of coffee:
    m = 10;
    w = 8;
    s = 1;
startagain:
    while (flag)
    {
        printf("The available quantity of ingredient is :\nMilk=%d\nwater= %d\nsugar= %d\n", milk, water, sugar);
        printf("Cost per cup : %d\n", cost);

        printf("How many cup of coffee : ");
        scanf("%d", &order);

        totalcost = cost * order;
        printf("total cost of your order is : %d\n", totalcost);
        printf("please pay the amount first: ");
        scanf("%d", &pay);
        if (pay >= totalcost)
        {
            printf("\nPlease Wait.....");
            mr = m * order;
            wr = w * order;
            sr = s * order;
            change = pay - totalcost;
            if (mr <= milk && wr <= water && sr <= sugar)
            {
                milk -= mr;
                water -= wr;
                sugar -= sr;
                printf("\nYour coffee is ready sir\n");
                if (change > 0)
                {
                    printf("Take your change sir: %d", change);
                }
                printf("\nThankyou");
            }
            else if (wr > w)
            {
                printf("\nSorry Sir,water is not sufficient to make the coffee");
            }
            else if (mr > m)
            {
                printf("\nSorry Sir,milk is not sufficient to make the coffee");
            }
            else if (sr > s)
            {
                printf("\nSorry Sir,sugar is not sufficient to make the coffee");
            }
            else
            {
                printf("\nSorry sir You paid less amount,try again when you got suffiecint money ha ha ha....");
            }
        }
        else
        {
            printf("You paid less\nGo get more money sir.\n");
            goto get_money;
        }
        printf("\nDo you want more coffee: \nprss 1 for yes \n press 0 for no\n");
        scanf("%d", &flag);
    }
get_money:
    if (pay < totalcost)
    {
        printf("Do you have enough money now and want to order coffee: press \nYes-1\nNo-0\n");
        scanf("%d", &flag);
        if (flag == 1)
        {
            goto startagain;
        }
    }
    return 0;
}