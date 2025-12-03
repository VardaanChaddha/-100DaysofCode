#include <stdio.h>
/*Write a program to  find the HCF(GCD) of two numbers*/
    int main(){ int k , h , div = 0 , i1 = 1 , i2 = 1 , r , g , ori = 0 , count=0;
                printf("enter the value of k and h\n");
                scanf("%d %d" , &k , &h);
                r = k;
                g = h;
                while (k>0 && h>0 && i1 <= k && i1 <= h && i1 == i2)
                {div = k % i1;
                ori = h % i2;
                k = r;
                h = g;
                if ( div == 0 && ori == 0)
                  { while (i1 <= k && i1 <= h)
                      {i1 += 1;
                      div = k % i1;
                      ori = h % i1;
                      if (div == 0 && ori == 0)
                        {count = i1;}
                      k = r; 
                      h = g;}
                      if (count > i2)
                       {printf("%d" , count);}
                      else 
                       printf("%d" , i2);}
                i1 += 1;
                i2 += 1;}
                return 0;
    }