#include<stdio.h>
extern int a=10;
void main()
{
    int c,count=0;
    int *ptr;
  
    char p[500];
    printf("string:");
    scanf("%s",&p);

    while (p[c]!='\0')
    {
            if (c=='a' || c=='A'|| c=='e' || c=='i' || c=='I' || c=='O' || c=='o' || c=='U' || c=='u')

        c++;
        count++;

    }
    printf("The no. of vowels is %d",count);
printf("a=%d",a);

}