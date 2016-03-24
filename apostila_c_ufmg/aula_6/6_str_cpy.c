#include <stdio.h>

void StrCpy (char *destino, char *origem) {
    while(*origem) {
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino='\0';
}

int main () {
    char str1[100],str2[1],str3[100];
    printf ("Entre com uma string: ");
    gets (str1);
    StrCpy (str2,str1);
    StrCpy (str3,"Voce digitou a string ");
    printf ("\n\n%s%s\n",str3,str2);
    return(0); 
}