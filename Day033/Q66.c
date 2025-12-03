#include <stdio.h>
/*Q66: Insert an element in a sorted array at the appropriate position.*/
int main()
{
    int a, b, d = 0, e = 0, h = 1, g, i , x , r =0 , z = 0 , y =0 , f = 0 , t;
    printf("Enter the length you want your array to be off\n");
    scanf("%d", &a);
    int c[a] , k[a];
    while (d < a)
    {
        printf("Enter the next value you want in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    while (z <= a)
    {
      k[z] = c[y];
      z += 1;
      y += 1;
    }
    printf("Enter the element which you want to insert in the array\n");
    scanf("%d", &b);
    t = a - 1;
    if (c[f] > c[t])
    {
       while (e < a)
    {
        if (c[e] > b && c[h] < b)
        {
            i = h;
            while (h <= a)
            {
                g = h;
                c[g + 1] = k[h];
                h += 1;
            }
            x = g + 1;
            h = i;
            c[h] = b;
        }
        e += 1;
        h += 1;
    }

    }
    while (e < a)
    {
        if (c[e] < b && c[h] > b)
        {
            i = h;
            while (h <= a)
            {
                g = h;
                c[g + 1] = k[h];
                h += 1;
            }
            x = g + 1;
            h = i;
            c[h] = b;
        }
        e += 1;
        h += 1;
    }
    while (r < x)
    { 
      printf("%d" , c[r]);
      r += 1;
    }
    return 0;
}