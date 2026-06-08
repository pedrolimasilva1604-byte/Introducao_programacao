#include <stdio.h>

typedef struct {
    char nome[50];
    float notas[3];
    float media;
} Aluno;

Aluno calcularMedia(Aluno a) {
 a.media = (a.notas[0] + a.notas[1] + a.notas[2]) / 3.0;
 return a;
}

char definirConceito(float media) {
if (media >= 9.0) {
    return 'A';
} else if (media >= 7.0) {
    return 'B';
} else if (media >= 5.0) {
    return 'C';
} else {
        return 'D';
    }
}

void imprimirAluno(Aluno a) {
char conceito = definirConceito(a.media);
printf("%-20s | %5.2f | %5.2f | %5.2f | %5.2f | %8c\n", 
a.nome, a.notas[0], a.notas[1], a.notas[2], a.media, conceito);
}

void ordenarPorNota(Aluno turma[], int n) {
for (int i = 0; i < n - 1; i++) {
 int maior_idx = i;
for (int j = i + 1; j < n; j++) {
 if (turma[j].media > turma[maior_idx].media) {
    maior_idx = j;
 }
}
if (maior_idx != i) {
 Aluno temp = turma[i];
 turma[i] = turma[maior_idx];
 turma[maior_idx] = temp;
  }
 }
}

int main() {
int n;

printf("Digite a quantidade de alunos: ");
scanf("%d", &n);

Aluno alunos[n];

for (int i = 0; i < n; i++) {
 printf("\n--- Aluno %d ---\n", i + 1);
 printf("Nome: ");
 scanf(" %[^\n]", alunos[i].nome); 
        
for (int j = 0; j < 3; j++) {
 printf("Nota %d: ", j + 1);
 scanf("%f", &alunos[i].notas[j]);
}
        
alunos[i] = calcularMedia(alunos[i]);
    }

ordenarPorNota(alunos, n);

printf("\n============================= BOLETIM =============================\n");
printf("%-20s | Nota1 | Nota2 | Nota3 | Média | Conceito\n", "Nome");
printf("-------------------------------------------------------------------\n");
    
for (int i = 0; i < n; i++) {
 imprimirAluno(alunos[i]);
}
    
printf("===================================================================\n");

return 0;
}