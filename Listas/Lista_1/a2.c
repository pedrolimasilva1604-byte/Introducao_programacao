#include <stdio.h>

typedef struct{
  int timeA;
  int timeB;
} placar;

int main(){
  placar gols;
  
  printf("quantos gols fez o time A? e o timeB?\n");
  scanf("%d %d", &gols.timeA, &gols.timeB);
  
  printf("----PLACAR----\n time A: %d\n time B: %d\n", gols.timeA, gols.timeB );
  if(gols.timeA > gols.timeB){
    printf("time A venceu!");
  } else if(gols.timeA < gols.timeB){
    printf("time B venceu!");
} else {
  printf("o jogo empatou!");
}

  return 0;
}
