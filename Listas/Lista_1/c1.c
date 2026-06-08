#include <stdio.h>

typedef struct{
    float a1;
    float b1;
} valores;

 float somar(float a, float b){
   return a + b;
 }

 float subtrair(float a, float b){
    return a - b;
 }

 float multiplicar(float a, float b){
    return a * b;
 }

 float dividir(float a, float b){
   if(b == 0){
      printf("não e possível dividir por 0\n");
      return 0;
   } else{
    return a / b;
   }
 }


 int main(){

 float a, s, m, d;
 valores operacoes;

 printf("digite dois numeros\n");
 scanf("%f %f", &operacoes.a1, &operacoes.b1);

 a = somar(operacoes.a1, operacoes.b1);
 s = subtrair(operacoes.a1, operacoes.b1);
 m = multiplicar(operacoes.a1, operacoes.b1);
 d = dividir(operacoes.a1, operacoes.b1);



 printf("adicao: %.2f\n subtracao: %.2f\n multiplicacao: %.2f\n divisao: %.2f\n", a, s, m, d);

 return 0;
 }