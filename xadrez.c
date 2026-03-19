#include <stdio.h>

int main() {
  int movimentoDaTorre = 1;
  int movimentoDoBispo = 1;

  printf("*** Movimentando a torre ***\n");

  while (movimentoDaTorre <= 5){
    printf("Direita\n");
    movimentoDaTorre++;
  }

  printf("*** Movimentando o bispo ***\n");

  do {
    printf("Cima, Direita\n");
    movimentoDoBispo++;
  } while (movimentoDoBispo <= 5);

  printf("*** Movimentando a rainha ***\n");

  for (int i = 1; i <=8; i++) {
    printf("Esquerda\n");
  }

  return 0;
}