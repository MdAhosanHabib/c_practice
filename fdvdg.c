#include<stdio.h>
int main ()
{
    int n[10], i, j;
    for(i=0; i<10; i++){
        n[i]=i+100;
    }
    for(j=0; j<10; j++){
        printf("%d", n[j]);

    }
    return 0;
}
