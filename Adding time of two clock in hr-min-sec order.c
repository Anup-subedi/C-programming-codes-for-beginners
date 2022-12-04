#include<stdio.h>

struct time
{
    int hr,min,sec;

} t1,t2,t3;

void main()
{
    int h,m;
    printf("Enter values in T1:\n");
    printf("Time(hour min sec):");
    scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);

    printf("Enter values in T2:\n");
    printf("Time(hour min sec):");
    scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);

    if (t1.sec>=60)
    {
        m=t1.sec/60;
        t1.sec=t1.sec%60;
        
    }
    t1.min=m+t1.min;

    if (t1.min>=60)
    {
        h=t1.min/60;
        t1.min=t1.min%60;
        
    }
    t2.hr=h+t2.hr;
     if (t2.sec>=60)
    {
        m=t2.sec/60;
        t2.sec=t2.sec%60;
        
    }
    t2.min=m+t2.min;

    if (t2.min>=60)
    {
        h=t2.min/60;
        t2.min=t2.min%60;
        
    }
    t2.hr=h+t2.hr;
    
    printf("Values of T3:\n");
    printf("Time(hour min sec):%d %d %d",t1.hr+t2.hr,t1.min+t2.min,t1.sec+t2.sec);
    

    
}