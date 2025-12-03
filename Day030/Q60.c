#include <stdio.h>
/*Q60: Count positive, negative, and zero elements in an array.*/
  int main(){ int a , negative = 0 , positive = 0 , zero = 0 , d = 0 , e = 0;
              printf("Enter the length you want your array to be off\n");
              scanf("%d" , &a);
              int c[a];
              while(d < a)
              {printf("Enter the next value you want in your array c[%d]" , a);
               scanf("%d" , &c[d]);
               d += 1;
            }
              while(e < a)
              { if (c[e] < 0)
                 {negative += 1;}
                else if (c[e] > 0)
                 {positive += 1;}
                else
                 {zero += 1;}
                 e += 1;
              }
              printf("The total number of negative values entered by you is %d\n" , negative);
              printf("The total number of positive values entered by you is %d\n" , positive);
              printf("The total number of times you have entered zero value is %d\n" , zero);
              return 0;
  }