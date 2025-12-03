#include <stdio.h>
/*Count even and odd numbers in an array.*/
int main(){ int a , even = 0 , odd = 0 , d = 0 , e = 0;
            printf("Enter the length you want the array to be off\n");
            scanf("%d" , &a);
            int c[a];
            while(d < a)
            {
              printf("Enter the next value you want in the array c[%d]" , a);
              scanf("%d" , &c[d]);
              d += 1;
            }
            while(e < a)
            {
             if(c[e] % 2 == 0)
             {even += 1;}
             else
             {odd += 1;}
             e += 1;
            }
            printf("The total number of even number enetered by you are %d\n" , even);
            printf("The total number of odd number entered by you are %d\n" , odd);
             return 0;
}