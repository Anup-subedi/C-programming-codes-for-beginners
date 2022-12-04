#include<stdio.h>
#include<string.h>


void main()
{
    char ch, str[10];
    int l,i;
      
      printf("Enter string:");
      scanf("%s",str);

      for(i=0; str != '\0';i++)
      {
        l++;
      }

  for(i=0;i=l/2;i++)
  {
    ch=str[i];
    str[i]=str[l-i-1];
    str[l-i-1]=ch;
  }
  printf("The reversed string:",str);
}

