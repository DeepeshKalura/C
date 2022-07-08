/*
    Develop a program to read and print set of name, roll number, date of birth and
    date of admission of "N" students in college where date of admission consits of three
    members date such as day, mounth, and year as a separate structure.

     Made by Deepesh Kalura.
*/

#include <stdio.h>

typedef struct students
{
    char name[100];
    int rollnumber;
    typedef struct birth
    {
        int day;
        int mounth;
        int year;
    }birth;
    typedef struct admission
    {
        int day;
        int mounth;
        int year;
    }admission;
}stu;

int main()
{
    int n;
    scanf("%d", &n);
    stu a[n];
    for (int i =0; i<n; i++)
    {
        printf("Enter name of student %d",i+1);
       scanf("%s",a[i].name);
       printf("Enter rollnumber of student %d",i+1);
       scanf("%d",&a[i].rollnumber);
       printf("Enter date of birth of student in format of dd-mm-yyyy %d",i+1);
       scanf("%d %d %d",&a[i].birth.day,&a[i].birth.month,&a[i].birth.year);
       printf("Enter date of admission of student in format of dd-mm-yyyy %d",i+1);
       scanf("%d %d %d",&a[i].admission.day,&a[i].admission.month,&a[i].admission.year);
       
       
    }
    for(int i=0;i<n;i++){
        printf("about student %d\n",i+1);
        printf("Name = %s\n",a[i].name);
        printf("Roll Number = %d\n",a[i].rollnumber);
        printf("Date of Birth = %d-%d-%d\n",a[i].birth.day,a[i].birth.month,a[i].birth.year);
        printf("Date of Birth = %d-%d-%d\n",a[i].admission.day,a[i].admission.month,a[i].admission.year);
        printf("\n\n");
    }
    
}