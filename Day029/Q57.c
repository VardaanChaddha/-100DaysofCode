#include <stdio.h>
/*Q57: Find the sum of array elements.*/
  int main(){ int a , b = 0 , d = 0 , sum = 0;
              printf("enter the length you want the array to be off\n");
              scanf("%d" , &a);
              int c[a];
              while(b < a)
              {printf("enter the next value you want in c[%d]" , a);
                scanf("%d" , &c[b]);
                b += 1;
              }
              while(d < a)
              { sum = sum + c[d];
                d += 1;
              }
              printf("The sum of all the values entered by you is %d" , sum);
             return 0;
  }