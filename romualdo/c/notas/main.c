#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COMP_NOME 50
#define QUANT_ALUNOS 2
#define QUANT_NOTAS 4

typedef struct aluno {
    char nome[COMP_NOME];
    float notas[QUANT_NOTAS];
} aluno_t;

void getRandNota(aluno_t* aluno);

void getAlunos(aluno_t* alunos);

void getAluno(aluno_t* aluno);

void getNomeAluno(aluno_t* aluno);

void printNomeAluno(aluno_t aluno);

void printNotasAluno(aluno_t aluno);

void printAluno(aluno_t aluno);

void printAlunos(aluno_t* alunos);

int main() {
    aluno_t alunos[QUANT_ALUNOS];
    srand((unsigned)time(NULL));

    getAlunos(alunos);
    printAlunos(alunos);
    return 0;
}

void getRandNota(aluno_t* aluno) {
    int i = 0;

    for(i = 0; i < QUANT_NOTAS; i++) {
        aluno->notas[i] = (rand() % 101) / 10.0;
    }
}

void getNomeAluno(aluno_t* aluno) {
    printf("Insira o nome to aluno: ");
    fgets(aluno->nome, COMP_NOME, stdin);
}

void getAluno(aluno_t* aluno) {
    getRandNota(aluno);
    getNomeAluno(aluno);
}

void getAlunos(aluno_t* alunos) {
    int i = 0;

    for(i = 0; i < QUANT_ALUNOS; i++) {
        getAluno(&alunos[i]);
    }
}

void printNomeAluno(aluno_t aluno) {
    printf("\nNome Do Aluno: %s", aluno.nome);
}

void printNotasAluno(aluno_t aluno) {
    int i = 0;
    float media = 0;

    for(i = 0; i < QUANT_NOTAS; i++) {
        printf("Nota %d: %0.2f\n", i + 1, aluno.notas[i]);
        media += aluno.notas[i];
    }

    media /= QUANT_NOTAS;

    printf("Media: %.2f\n", media);
    printf("Status: %s\n", media >= 7.0 ? "Aprovado":"Nao aprovado");
}

void printAluno(aluno_t aluno) {
    printNomeAluno(aluno);
    printNotasAluno(aluno);
}

void printAlunos(aluno_t* alunos) {
    int i = 0;

    for(i = 0; i < QUANT_ALUNOS; i++) {
        printAluno(alunos[i]);
    }
}
