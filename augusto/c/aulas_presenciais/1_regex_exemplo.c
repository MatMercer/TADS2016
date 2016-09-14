#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() {
    regex_t reg;
    const char* linguagem = "[0-9]";
    const char* palavra = "abc123";

    regcomp(&reg, linguagem, REG_EXTENDED);

    if(regexec(&reg, palavra, 0, NULL, 0) == 0) {
        printf("Esse conjunto de caracteres '%s' tem algum numero...\n", palavra); 
    }
    else { 
        printf("Esse conjunto de caracteres '%s' nao tem nenhum numero...\n", palavra); 
    }

    return 0;
}
