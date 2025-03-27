#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    // inicialização de condição e incremento

    printf("Movimento da torre: \n");  // condição (movimentar a torre)


    for (int i = 0; i < 5; i++)
     {                            // incremento
        printf("direita \n");
}

  // Movimento da Rainha: 8 casas para a esquerda (usando do-while)

printf("Movimento da rainha: \n"); // condição movimentar a rainha
  int i = 0;

do {             // incremento
printf("Esquerda\n");
    i++;

} while (i < 8);

// Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)

  printf("Movimento do bispo: \n");    // condição movimentar o bispo
  i = 0;

  while (i < 5)  {       // incremento
        printf("Cima Direita\n");
        i++;
    }
    
return 0;


}
