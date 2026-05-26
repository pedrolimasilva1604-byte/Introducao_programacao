#include<stdio.h>

typedef struct{
  int idade;
  float altura;
  char nome[50];
} pessoa;

int main(){
  pessoa p1;
  printf("escreva a sua idade, altura e nome:\n");
  scanf("%d %f %s", &p1.idade, &p1.altura, p1.nome);
  printf("%d\n %.2f\n %s", p1.idade, p1.altura, p1.nome);
  
  return 0;
}
