#include<stdio.h>

void main()
{
    FILE *fp;
    char c;
    fp= fopen("file1", "w");
    c=getchar();
while(c!=EOF)
putc(c,fp);
fclose(fp);

printf("data oputput:\n");

 fp=fopen("file1", "r");
 while ((c=getc(fp))!=EOF)
 printf("%c",c);
 fclose(fp);
}
