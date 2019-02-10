#include <stdio.h>
int main()
{
    int i, j;
    int stars, spaces;

    stars = 1;
    spaces = 5 - 1;

    for(i=1; i<5*2; i++)
    {
        for(j=1; j<=spaces; j++)
            printf(" ");

        for(j=1; j<stars*2; j++)
            printf("*");

        printf("\n");

        if(i<5)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
}
