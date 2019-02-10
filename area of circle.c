#include<stdio.h>
#define PI 3.1416
int main ()
{
    float r;
    printf ("Enter the redious: " );
    scanf ("%f", &r);
    printf ("A = %.4f", *r*r);
    return 0;
}
