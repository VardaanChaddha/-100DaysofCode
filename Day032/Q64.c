#include <stdio.h>
/* Q64: Find the digit that occurs the most times in an integer number. */
 int main(){ int div , a = 0 , b = 0 , d = 0 , h = 0 , count = 0 , count1 = 0 , ori = 0 , tem , p;
             long long int num;
             printf("Enter the value of your number\n");
             scanf("%lld" , &num);
             tem = num;
             while(num > 0)
             {
               num /= 10;
               h += 1;
             }
             int c[h];
             num = tem;
             while(num > 0 && a < h)
             {
               div = num % 10;
               c[a] = div;
               num = num / 10;
               a += 1;
             }
              while (b < h)
              {
                while (d < h)
                {
                  if (c[b] == c[d])
                  {count += 1;
                  if (count > count1)
                  {   
                    count1 = count;
                    ori = c[b];
                  }
                  if (count == count1)
                {
                  if (ori > c[b])
                  {
                    ori = c[b];
                  }
                }}
                  d += 1;
                } count = 0;
                  b += 1;
                  d = 0;
              }
              printf("%d" , ori);
              return 0;
 }    