#include <stdio.h>

typedef struct{
 char nome[50];
 float preco;
 int quant;
} produtos;

int main(){
  int n = 0;
  float soma = 0; 
 
 printf("quantos produtos foram comprados?\n\n");
 scanf("%d", &n);
 
  produtos info[n]; 
  printf("digite respectivamente o nome, preço e quantidade dos produtos comprados.\n\n");
  
  float valor_estoque = 0; 
  
for(int i = 0; i < n; i++){
 scanf("%s %f %d", info[i].nome, &info[i].preco, &info[i].quant);

 printf("produto %d:\n nome do produto: %s\n preço do produto: %.2f\n quantidade do produto: %d\n", i +1, info[i].nome, info[i].preco, info[i].quant);
 
 valor_estoque = info[i].preco * info[i].quant;
 soma += valor_estoque;
  printf("valor em estoque: %.2f\n\n", valor_estoque);
}
 printf("valor total dos produtos em geral: %.2f\n", soma);
 
 int imaior = 0;
 for(int i = 1; i < n; i++){
   float valor_estoque_i = info[i].preco * info[i].quant; 
   float valor_estoque_maior = info[imaior].preco * info[imaior].quant; 
   if(valor_estoque_maior < valor_estoque_i){
     imaior = i;
   }
 }

printf("produto com maior valor em estoque: %.2f", info[imaior].preco * info[imaior].quant);

 return 0;
}
