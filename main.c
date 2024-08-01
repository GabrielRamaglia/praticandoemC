#include "funcoes.h"
#include <stdio.h>


int main(void) {

  int opcao;
  struct prateleira produto[TAM];
  menu();

  do{
  scanf("%d", &opcao);
  

  switch(opcao){

    case 1:
    ReceberDadosPrateleira(produto);
    break;
    
    case 2:
    printf("O valor de estoque do produto é: %.2f\n",   calcularValorEstoqueProduto(produto));
    break;

    case 3:
    printf("Valor total do estoque: R$%.2f\n", calcularValorTotalEstoque(produto));
    break;

    case 4:
    printf("O valor do produto mais caro do estoque é: %.2f\n", encontrarProdutoMaisCaro(produto));
    break;

    case 5:
    printf("O valor do produto mais barato do estoque é: %.2f\n", encontrarProdutoMaisBarato(produto));
    break;
    
    default:
    printf("Finalizando o programa...");
  }
    printf("\nEscolha outra opção ou digite (6) para finalizar: \n");
  }while(opcao >= 1 && opcao <= 5);
  
  return 0;
}