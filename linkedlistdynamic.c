//Program to create a self referential structure and allocate memory dynamically
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int rollno;
    char name[50];
    float aggr;
    struct student *next;
}stud;
int main()
{   
    stud *first;
    int n;
    printf
    stud *s=(stud *)calloc(n,sizeof(stud));
    printf("Enter student 1 details:(rollno,name,aggregate):\n");
    scanf("%d",s1->rollno);
    gets(d);
    strcpy(s1->name,d);
    scanf("%f",s1->aggr);
    printf("Enter student 2 details(rollno,name,aggregate):\n");
    scanf("%d%s%f",s2->rollno,s2->name,s2->aggr);
    printf("Enter student 3 details(rollno,name,aggregate):\n");
    scanf("%d%s%f",s3->rollno,s3->name,s3->aggr);
    printf("\n\n");
    first=s1;
    s1->next=s2;
    s2->next=s3;
    s3->next=0;
    while (first!=0)
    {
        printf("Roll.no:%d\nName:%s\nAggregate:%f\n\n",first->rollno,first->name,first->aggr);
        first=first->next;     
    }
    free(s1);
    free(s2);
    free(s3);
    return 0;
}
