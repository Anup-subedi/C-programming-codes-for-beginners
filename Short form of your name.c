#include<stdio.h>

void main()
{
char fname[20], fmiddle[10], lname[20];
    printf("Enter full name(first middle Last:)");

    scanf("%s %s %s", fname, fmiddle, lname);

 printf("%c.%c. %s",fname[0],fmiddle[0],lname);
 

}