#include <stdio.h>
/*Q41: Write a program to swap the first and last digit of a number.*/
 int  main(){ int num , h = 0 , count = 0 , i = 0 , real = 1 , first , last , middle , value;
              printf("enter the value of number\n");
              scanf("%d" , &num);
              h = num;
              while (num > 0)
              { num /= 10;
                count += 1;}
              while (i < count - 1)
              { real *= 10;
                i += 1;}
                num = h;
                last = num % 10;
                last *= real;
                middle = (num % real) / 10;
                num = h;
                first = num / real;
                value = last + middle  * 10 + first;
                printf("Swapped digits %d" , value);
                return 0;
              }