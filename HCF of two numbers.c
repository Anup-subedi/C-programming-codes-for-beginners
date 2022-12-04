#include<stdio.h>

void main()

{
    int a,b,max,gcd,i;

    printf("enter any twono=");
    scanf("%d %d",&a,&b);

    max=(a>b)?a:b;
    for (i=1;i<=max;i++)
        {
            if(a%i==0 && b%i==0)
                {
                    gcd=i;
            
                }
            
        }
        printf("the hcf:%d",gcd);
}
        


