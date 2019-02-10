#include<stdio.h>
   int main(){

   int i,n,sum=0,mul=1;
   scanf("%d", &n);

    for(i=1;i<=n;i=i+2){

        sum=sum+i;
        mul=mul*i;
    }
   printf("%d ", sum);
   printf(" %d", mul);

   }
