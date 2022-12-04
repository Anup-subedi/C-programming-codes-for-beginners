#include<stdio.h>

struct cricket {
   char pname[20];
   char tname[20];
   int avg;
} player[10], temp;

void main() {
   int i, j, n;

   for (i = 0; i < 10; i++) {
      printf("\nEnter Player Name : ");
      scanf("%s", player[i].pname);
      printf("\nEnter Team Name : ");
      scanf("%s", player[i].tname);
      printf("\nEnter Average : ");
      scanf("%d", &player[i].avg);
      printf("\n");
   }
   n = 10;

   for (i = 1; i < n; i++)
      for (j = 0; j < n - i; j++) {
         if (strcmp(player[j].tname, player[j + 1].tname) > 0) {
            temp = player[j];
            player[j] = player[j + 1];
            player[j + 1] = temp;
         }
      }

   for (i = 0; i < n; i++) {
      printf("\n%s\t%s\t%d",player[i].pname,player[i].tname,player[i].avg);
   }
}
   