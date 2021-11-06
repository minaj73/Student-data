#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

    int rollno=0;
    char name[80]=" ";
    float per=0.0;
    char course[40]=" ";
    printf("\n Accessing student details");
    printf("\n enter roll no ");
    scanf("%d",&rollno);
    fflush(stdin);
    printf("\n enter name ");
    //scanf("%[^\n]",name);
    gets(name);
    printf("\n student percentage ");
    scanf("%f",&per);
    fflush(stdin);
    printf("\n enter course name ");
    // scanf("%[^\n]",course);
    gets(course);
    printf ("student details=");
    printf("\n roll no =%d",rollno);
    printf("\n name =%S",name);
    printf("\n percentage =%f",per);
    printf("\n course name =%s",course);
    return 0;
}
