#include<stdio.h>

void main()
{
    int n,val,a[100],i,p;

    printf("enter no.of elements in an ascending order in the  array:");
    scanf("%d",&n);
    printf("enter elements in an ascending order in the  array:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",(a+i));
    
    }
    printf("enter the value you want to add:");
    scanf("%d",&val);

    for(i=0;i<n;i++)
        {
        if (val<*(a+i))
        {p=i;
        break;}
        else
        {p=i+1;}
          
         }
    /*for(i=n+1;i>=p;i--)
        {

          a[i]=a[i-1];
        }
        a[p]=val;

        printf("The sorted array is:\n");
        for(i=1;i<=n;i++)
        {
            printf("%5d",a[i]);
        }
        */
      for(i=n;i>p;i--)
      {*(a+i)= *(a+i)-1;}
   /* insert value at the proper position */
      a[p]=val;
      printf("\n\nAfter Insert the list is :\n");
   for(i=0;i<=n;i++)
      printf("% 5d",*(a+i));
	  printf("\n"); 
}