#include <stdio.h>
#include <conio.h>
/* Este programa usa conio.h . Se você não tiver a conio, ele
não funcionará no Unix */
int main() {
   char Ch;
   Ch=getch();
   printf ("Voce pressionou a tecla %c",Ch);
   return(0);
} 