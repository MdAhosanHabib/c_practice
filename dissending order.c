
#include<stdio.h>
int main()
{
    int a,b, sum ;
    scanf ("%d", &a);
    scanf("%d",&b);
    sum = add (a,b);
    printf ("sum is %d", sum);

}
int add ( int x,int y)
{
    int sum;
    sum= x+y;
    return sum;
}
