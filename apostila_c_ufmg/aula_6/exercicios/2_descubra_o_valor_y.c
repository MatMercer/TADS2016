#include <stdio.h>

int main() {
   int y, *p, x;
   y = 0;
   p = &y;      //p aponta para y
   x = *p;      //x = y
   x = 4;       //x = 4
   (*p)++;      //y = 1
   x--;         //x = 3
   (*p) += x;   //1 + 3 = 4 =  
   printf ("y = %d\n", y);
   return(0);
} 