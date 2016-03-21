#include <stdio.h>

int StrLen (char *str) {
    int tam = 0;
    while(*str != '\0') {
        tam++;
        str++;
    }
    return tam;
}

void StrCat (char *original, char *concat) {
    original += StrLen(original);
    while(*concat) {
        *original = *concat;
        original++;
        concat++;
    }
}


void StrCpy (char *destino, char *origem) {
    while(*origem) {
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino='\0';
}

int main () {
    int tamanho = 0;
    char str1[100],str2[1],str3[100];
    printf("Entre com uma string: ");
    gets(str1);
    tamanho = StrLen(str1);
    StrCpy(str3, "A string ");
    StrCat(str3,"que voce digitou tem o tamanho de ");
    printf("\n\n%s%d\n",str3,tamanho);
    return(0); 
}