#include <stdio.h>

typedef struct{
 char nome[50];
 float preco;
 int quantidade;
} produto;

int main(){
 produto info;

 printf("informe o nome, preco e quantidade do produto.\n\n");
 scanf("%s %f %d", info.nome, &info.preco, &info.quantidade);

 float total = info.preco * info.quantidade;
 float desconto = total - (total / 10);

 printf("nome do produto: %s\n valor total: %.2f\n valor total com 10%% de desconto %.2f",
 info.nome, total, desconto);

 return 0;
}
