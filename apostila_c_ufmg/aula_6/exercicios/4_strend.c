#include <stdio.h>

int StrLen (char *str) {
    int tam = 0;
    while(*str != '\0') {
        tam++;
        str++;
    }
    return tam;
}

int strend(char *s, char *t) {
    //int contol = abs(StrLen(s) - StrLen(t));
    //s += contol;
    //printf("%d\n", x);

    s += abs(StrLen(s) - StrLen(t));
    while(*t) {
        //printf("%c | %c\n", *s, *t);
        if(*s != *t) {
            //printf("False!\n");
            return 0;
        }
        s++;
        t++;
    }

    //printf("True!\n");
    return 1;
}

//int strend(char *s, char *t) {
//    s += StrLen(s) - 1;
//    t += StrLen(t) - 1;
//    
//    while(*t) {
//        printf("%c | %c\n", *s, *t);
//        if(*s != *t) {
//            printf("False!\n");
//            return 0;
//        }
//        s--;
//        t--;
//    }
//
//    printf("True!\n");
//    return 1;
//}

int main () {
    int tamanho = 0;
    char str1[100],str2[1],str3[100];
    printf("Entre com uma string: ");
    gets(str1);
    printf("Entre com outra string: ");
    gets(str2);

    if(strend(str1, str2)) {
        printf("O final da string '%s' eh igual a string '%s'.\n", str1, str2);
    }
    else {
        printf("Nao existe final igual!\n");
    }
    return(0); 
}