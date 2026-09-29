#include <stdio.h>

int main (void) { 
    int s;

    printf("input the second :");
    scanf("%d", &s);
    
    printf("the time is %d : %d\n", s / 60, s % 60);

   return 0;
}