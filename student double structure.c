#include<stdio.h>
struct date {
int  day;
int month;
int year;
};
struct student
{
    char name [25];
    long int matric;
    int semester;
    struct date registration;
};
struct student stu [100];
int main ()
{
    int i,c,found = 0;
    printf ("Enter name of studet [or 'end' when finish]");
    printf ("\n ......................\n");
    for (i=0;;i++){
        printf("\n Enter name:");
        scanf ("%s",stu [i].name);
        if(strcmp(stu[i].name, "end")==0)
            break; // exit from the loop
            /* other wise input the remaining information*/
            printf ("  matric:");
            scanf(" %d", &stu[i].matric);
            printf ("  semester:");
            scanf("%d",&stu[i].semester);
            printf(" Reg.Day[1............31]:");
            scanf("%d", &stu[i].registration .day);
            printf(" Reg.month[1...12];");
            scanf ("%d", &stu[i].registration.month);
            printf("  Reg.year:");
            scanf( "%d",&stu[i].registration.year);

                }
           char search_name [25]; // variable to input a name for search;
            printf ("\n Enter a name to search:");
            scanf ("%s, search-name");
            for(c=0;c<i;c++){
                if(strcmp(search_name , stu[c].name ==0)){
                    printf("\n Item is found \n" );
                    printf("Name:%s \n", stu[c].name);
                    printf("matric :%ld\n",stu[c].matric);
                    printf("semester :%d\n", stu[c].semester);
                    printf("Regitration:%d _%d _%d",stu[c].registration.day,stu[c].registration.month,
                           stu[c].registration.year);
                           found=1;
                           break; // no need for search;


                }
            }
            if(found==0)
                printf("Item not found");
            return 0;
}
