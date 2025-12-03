#include <stdio.h>
/*Q69: Find the second largest element in an array.*/
int main()
{
    int a, b, d = 0 , e = 0 , f =0 , count = 0 , g = 0 , h = 0 , i =0 , result = 0 , ans = 0;
    printf("Enter the length you want your array to be off\n");
    scanf("%d", &a);
    int c[a];
    while (d < a)
    {
        printf("Enter the next element you want in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    while (e < a)
    {
     while (f < a)
     {
       if (c[e] >= c[f])
       {
        count += 1;
       }
       if (c[e] < c[f])
       {
        count = 0;
        break;
       }
       f += 1;
     }
     f = 0;
     if (count == a)
     {g = e;}
     count = 0;
     e += 1;
    }
    while (h < a)
    {
     if (h != g)
     {while(i < a)
      {
      if (i == g)
        {i += 1;
         continue;}
      if (c[h] >= c[i])
       {
        result += 1;
       }
       if (c[h] < c[i] )
       {
        result = 0;
        break;
       }
       i += 1;
     } 
    } if (result == a - 1)
      {ans = c[h];}
      i = 0;
      h += 1;
      result = 0;
   }
   
   printf("The second largest value here is %d" , ans);
   return 0;
}