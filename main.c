#include <stdio.h>

int main (void) { 
   int s;

   printf("input the second : ");
   scanf("%d", &s);

   printf("The time for %d second is %d : %d : %d", s, s/3600, (s%3600)/60, (s%3600)%60);

   return 0;
}