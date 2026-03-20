#include <stdio.h>

void recursivoMovimentoDaTorre(int posicaoDaTorre, int numeroDeCasas) {
  if (posicaoDaTorre <= numeroDeCasas) {
    printf("Cima, Direita\n");
    recursivoMovimentoDaTorre(posicaoDaTorre + 1, numeroDeCasas);
  }
}

void recursivoMovimentoDoBispo(int posicaoDoBispo, int numeroDeCasas) {
  if (posicaoDoBispo <= numeroDeCasas) {
    printf("Cima, Direita\n");
    recursivoMovimentoDoBispo(posicaoDoBispo + 1, numeroDeCasas);
  }
}

void recursivoMovimentoDaRainha(int posicaoDaRainha, int numeroDeCasas) {
  if (posicaoDaRainha <= numeroDeCasas) {
    printf("Esquerda\n");
    recursivoMovimentoDaRainha(posicaoDaRainha + 1, numeroDeCasas);
  }
}

int main()
{
  // printf("*** Movimentando o cavalo ***\n");

  // for (posicaoHorizontalDoCavalo; posicaoHorizontalDoCavalo <= numeroDeCasasParaEsquerdaDoCavalo; posicaoHorizontalDoCavalo++) {
  //   while (posicaoVerticalDoCavalo <= numeroDeCasasParaBaixoDoCavalo) {
  //     printf("Baixo\n");

  //     posicaoVerticalDoCavalo++;
  //   }

  //   printf("Esquerda\n");
  // }

  int posicaoTorre = 1;
  int numeroDeCasasTorre = 5;

  printf("*** Movimento da Torre ***\n");
  recursivoMovimentoDaTorre(posicaoTorre, numeroDeCasasTorre);

  int posicaoBispo = 1;
  int numeroDeCasasBispo = 5;

  printf("*** Movimento do Bispo ***\n");
  recursivoMovimentoDoBispo(posicaoBispo, numeroDeCasasBispo);

  int posicaoRainha = 1;
  int numeroDeCasasRainha = 8;

  printf("*** Movimento da Rainha ***\n");
  recursivoMovimentoDaRainha(posicaoRainha, numeroDeCasasRainha);

  return 0;
}