#include <stdio.h>
int main ()
{
    int marks;
    char grade;
    scanf ("%d",&marks);
    if (marks >= 80){
        grade = 'A+';
        printf ("your grade is %c\n",grade);
    }
    else if (marks >= 70){
        grade ='A';
        printf ("your grade is %c\n",grade);
    }
    else if (marks >= 60){
        grade = 'B';
        printf (" your grade is %c\n", grade);
    }
    else if (marks >= 50){
        grade = 'C';
        printf ("your grade is %c\n", grade);
    }
    else if (marks >= 40){
        grade ='d';
        printf ("your grade is %c\n",grade);
    }
    else {
        printf ("your grade is F\n");
    }
    return 0;
}
