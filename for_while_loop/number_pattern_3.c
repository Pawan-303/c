#include <stdio.h>

int main()
 {
    //                    1
    //                   2 3
    //                  4 5 6
    //                 7 8 9 10

   int i, j, spc, rows, k, t = 1;

   printf("Input number of rows : ");     
   scanf("%d", &rows); 
   spc = rows * 2- 1;              

   for (i = 1; i <= rows; i++) {     
      for (k = spc; k >= 1; k--) {   
         printf(" ");
      }

      for (j = 1; j <= i; j++) {     
         printf("%d ", t++);                  
      }

      printf("\n");                 
      spc--;                         
   }
}