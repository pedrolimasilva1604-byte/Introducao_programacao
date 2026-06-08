#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} alunos;

int main() {
    int N;

    printf("quantos alunos tem na turma?\n");
    scanf("%d", &N);

    float soma = 0;
    alunos turma[N];

    printf("informe o nome e a nota de cada aluno respectivamente:\n\n");
    for (int i = 0; i < N; i++) {
        scanf("%s %f", turma[i].nome, &turma[i].nota);
        printf("aluno %d:\n nome do aluno: %s\n nota do aluno: %.1f\n\n", i + 1, turma[i].nome, turma[i].nota);
        soma += turma[i].nota;
    }

    float media = soma / N;
    int aprovados = 0;

    for (int i = 0; i < N; i++) {
        if (turma[i].nota >= 7.0) {
            aprovados++;
        }
    }

    printf("média da turma: %.1f\ntotal de aprovados: %d\n", media, aprovados);

    return 0;
}
