#include<stdio.h>

void main()
{
    char string[40];
    int length=0, flag=1,i;

    printf("Enter string:\n");
    gets(string);

    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-1-i] )
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("PALINDROME");
    }
    
   
}