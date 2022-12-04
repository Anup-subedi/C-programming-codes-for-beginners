#include<stdio.h>

void main()
{
    int a,b,c,max;
    printf("Enter three positive integers:");
    scanf("%d %d %d",&a,&b,&c);
/*
if ((a>b) && (a>c))
{
    printf("a is greatest.");
}
    if (b>c)
    {
        printf("b is the greatest");
    }
    else
{printf("c is the greatest.");
}*/
max= a>b? (a>c? a:c):(b>c? b:c); 
printf("the biggest number is:%d",max);
}