#include <stdio.h>
#include <stdlib.h>
int main(){
   int i, j,tamanho,base;
   printf("insira o tamanho das linhas:\n");
   scanf("%i",&tamanho);

   /* Linha Vertical */
   /* Note que o laço for se repete
   de 0 até i = tamanho - 1. Isso 
   permite com que o laço tenha o valor de repetições
   igual ao valor sentado em tamanho.
   Para fazer a linha vertical, basta pular a linha.*/
   for (i=0; i<tamanho;i++){
      printf("*");
      printf("\n");
   }
   printf("\n");
   /*Linha Horizontal*/
   /*Você pode seguir a mesma lógica que a anterior apenas retirando o \n*/
   /*Porém, nesse exemplo mostro que a ordem dos fatores não altera o resultado
   e decidi decrescer o i ao invés de somar*/
   for (i=tamanho; i>0;i--){
      printf("*");
   }    
   printf("\n");
   printf("Agora faremos triângulo-retângulos!\n");
   printf("insira o tamanho das bases:\n");
   scanf("%i",&base);
   /*No caso do triângulo, temos que abstrair alguns conceitos*/ 
   /*Para desenhar o triângulo do tamanho que queremos, 
   temos que utilizar o conceito que utilizamos nas linhas horizontais
   e verticais.*/
   /*O primeiro laço representa o tamanho do triângulo,
   enquanto o laço dentro dele representa quantos caracteres
   cada linha terá. 
   basicamente, quando estivermos na primeira Linha, teremos 1 caractere
   na segunda, dois e assim por diante, até que j seja menor ou igual a i */
   for (i = 0; i < base; i++){
      for (j = 0; j <= i; j++){
         printf("*");
      }
      printf("\n");
   }
   printf("\n");
   /*Segundo a mesma lógica, podemos desenhar o mesmo triângulo em 
   posições diferentes*/
   for (i = base; i >= 0; i--){
      for (j = 0; j < i; j++){
         printf("*");
      }
      printf("\n");
   }
   printf("\n");
   for ( i = base; i >= 1; i-- ) {
      printf("\n");
      for ( j = 0; j < (base - i); j++ ){
         printf(" ");
      }
      for ( j = 1; j <= i; j++ ){
         printf("*");
      }
   }
   printf("\n");
   for ( i = 0; i < base; i++ ) {
      printf("\n");
      for ( j = 1; j < (base-i); j++ ){
         printf(" ");
      }
      for ( j = 0; j <= i; j++ ){
         printf("*");
      }
   }
   printf("\n");
   return 0;
}

    
