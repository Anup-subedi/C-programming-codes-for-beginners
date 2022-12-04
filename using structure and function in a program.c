#include<stdio.h>

struct student
{
    char name[20];
    int age;
} s1;

struct student getinfo();

void main()
{
    struct student s;
    s=getinfo();
    printf("Name:%s",s.name);
    printf("age:%d",s.age);


}
struct student getinfo()
{
    struct student s1;
   printf("Enter name:");
   scanf("%s",s1.name);
   printf("age:");
   scanf("%d",&s1.age);
return s1;
}