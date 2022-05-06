#include <stdio.h>
void main()
{
    int i, j, k;

    for(i = 69; i >= 65; i--)
    {
        for(j = 65 ; j <= i; j++)
        {
            printf("%c", i);
        }
        if(i == 65)
        {
            break;
        }
            printf("\n");
        for(k = 65; k <= i; k--)
        {
            printf(" ");
        }
    }
}