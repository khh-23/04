#include <stdio.h>

int main (void) { 
    int y;

    printf("input the year :");
    scanf("%d", &y);

    
    printf("is the year %d the leap year? : %d", y, ((y%4==0) && (y%100!=0)) || (y%400==0));

   return 0;
}