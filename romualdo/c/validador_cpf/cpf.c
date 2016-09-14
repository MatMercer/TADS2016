#include <stdio.h>

void pegar_cpf(int* cpf);
void print_cpf(int* cpf);
int validar_cpf(int* cpf);

int main(int argc, char* argv) {
    int cpf[11] = {0};

    printf("Insira um CPF: ");
    pegar_cpf(cpf);

    printf("CPF detectado: ");

    print_cpf(cpf);
    if(validar_cpf(cpf)) {
        printf("CPF Válido.\n");
    }
    else {
        printf("CPF inválido.\n");
    }
    return 0;

}

/*
  "come" caracteres que sao numeros e coloca no vetor.
  se o caractere nao eh numero ele eh ignorado.
  quando 11 numeros sao digitados a fucao para.
*/
void pegar_cpf(int* cpf) {
    int digitos = 0;
    char digito = 0;
    
    while(digitos != 11) {
        digito = getchar();
        /* verifica so o catactere digitado eh digito e o transforma em int */
        if(digito >= 48 && digito <= 57) {            
            cpf[digitos] = digito - 48;
            digitos += 1;
        }
    }
}

/* retorna verdadeiro ou falso se um vetor de 11 numeros eh um cpf valido */
int validar_cpf(int* cpf) {
    int i = 0;
    int aux = 0;

    /* primeiro digito verificador */
    for(i = 0; i < 9; i++) {
        aux += cpf[i] * (10 - i);
    }
    aux = 11 - (aux % 11);
    
    if(aux > 9) {
        aux = 0;
    }

    if(aux != cpf[9]) {
        return 0;
    }
    /* segundo digito verificador */
    else {
        aux = 0;
        for(i = 0; i < 10; i++) {
            aux += cpf[i] * (11 - i);
        }
        aux = 11 - (aux % 11);
        
        if(aux > 9) {
            aux = 0;
        }

        if(aux != cpf[10]) {
            return 0;
        }
    }
    
    return 1;
}

/* printa de forma formatada um vetor com um cpf (11 digitos) */
void print_cpf(int* cpf) {
    int i = 0;
    for(i = 0; i < 11; i++) {
        printf("%d", cpf[i]);
        if((i + 1) % 3 == 0) {
            printf(".");
        }
    }
    printf("\n");
}
