#include <stdio.h>

typedef struct{
 char nome[50];
 int pontos;
} jogador;

int main(){
  int n = 0;
  printf("digite o numero de jogadores:\n");
  scanf("%d", &n);
  jogador info[n];

 printf("digite respectivamente o nome e os pontos de cada jogador:\n\n");
  for(int i = 0; i < n; i++){
    printf("jogador %d:\n", i + 1);
    scanf("%s %d", info[i].nome, &info[i].pontos);
    printf("nome do jogador: %s\n quantidade de pontos: %d\n\n", info[i].nome, info[i].pontos);
  }

  int imaior = 0, imenor = 0;
  for(int i = 1; i < n; i++){
    if(info[imaior].pontos < info[i].pontos){
      imaior = i;
    }}

  for(int i = 1; i < n; i++){
    if(info[imenor].pontos > info[i].pontos){
      imenor = i;
    }
  }
 printf("jogador com mais pontos: %s; total: %d pontos\n  jogador com menos pontos: %s; total: %d pontos\n", info[imaior].nome, info[imaior].pontos, info[imenor].nome, info[imenor].pontos);

return 0;

}
