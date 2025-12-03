#include <stdio.h>
/*Q77: Check if the elements on the diagonal of a matrix are distinct.*/
int main()
{
    int a, b, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, l = 0, count = 0;
    printf("Enter the number of rows you want in your array\n");
    scanf("%d", &a);
    printf("Enter the number of columns you want in your array\n");
    scanf("%d", &b);
    int c[a][b], k[a][b];
    if (a != b)  
    printf("Please make sure the matrix whixh you entered is square as only square matrix have perfect diagonals");
    if (a == b)
    {   while (d < a)
    {
        while (e < b)
        {
            printf("Enter the next element you want in your matrix c[%d][%d]\n", d, e);
            scanf("%d", &c[d][e]);
            e += 1;
        }
        d += 1;
        e = 0;
    }
    while (f < a && g < b)
    {
        k[f][g] = c[f][g];
        f += 1;
        g += 1;
    }
    while (h < a && i < b && count == 0)
    {
        while (j < a && l < b)
        {
            if (k[h][i] == k[j][l] && h != j && i != l)
            {
                printf("Not distinct");
                count += 1;
                break;
            }
            j += 1;
            l += 1;
        }
        j = 0;
        l = 0;
        h += 1;
        i += 1;
    }
    if (count == 0)
        printf("Distinct");}
    return 0;

}