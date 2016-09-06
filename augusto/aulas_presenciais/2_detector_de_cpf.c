#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() {
    regex_t reg;
    const char* linguagem = "([0-9]{3}.?){3}[0-9]";
    const char* cpf[100];

    printf("Insira um cpf: ");
    gets(cpf);

    regcomp(&reg, linguagem, REG_EXTENDED);

    if(regexec(&reg, cpf, 0, NULL, 0) == 0) {
        printf("Foi detectado um cpf.\n"); 
    }
    else { 
        printf("Nenhum cpf detectado.\n"); 
    }

    return 0;
}
