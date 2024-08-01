#include "funcoes.h"
#include <stdio.h>

void ReceberDadosPrateleira(struct prateleira produto[TAM]);
float calcularValorEstoqueProduto(struct prateleira produto[TAM]);
float calcularValorTotalEstoque(struct prateleira produto[TAM]);
float encontrarProdutoMaisCaro(struct prateleira produto[TAM]);
float encontrarProdutoMaisBarato(struct prateleira produto[TAM]);


void menu(){
  printf("Escolha a opção\n");
  printf("(1)Inserir dados da prateleira\n(2)Calcular o valor em estoque de um produto\n(3)Calcular o valor total em estoque\n(4)Encontrar o produto mais caro da prateleira\n(5)Encontrar o produto mais barato da prateleira\n(6)Finalizar programa\n");
}

void ReceberDadosPrateleira(struct prateleira produto[2]){
  // função que recebe os dados do produto 
  
  for (int i=0, f=1; i<TAM; i++, f++){
    printf("Diga o código do %d° produto: ", f );
    scanf("%d", &produto[i].codProduto);
    printf("Diga a quantidade do produto cod. %d: ", produto[i].codProduto );
    scanf("%d", &produto[i].qtdProduto);
    printf("Diga o preço do produto cod. %d: ", produto[i].codProduto );
    scanf("%f", &produto[i].priceProduto);
  }
}

float calcularValorEstoqueProduto(struct prateleira produto[TAM]){
  // função que calcula o preço do estoque do produto
  printf("Digite o código do produto\n");
  int aux;
  float mult = 0.0;
  scanf("%d", &aux);
  for(int i = 0; i<TAM; i++){
    if(produto[i].codProduto == aux){
      mult = (produto[i].priceProduto*produto[i].qtdProduto);
    }  
  }
  return mult;
}

float calcularValorTotalEstoque(struct prateleira produto[TAM]){
    float soma = 0;
    for(int i = 0; i<TAM; i++){
    soma = soma + (produto[i].priceProduto * produto[i].qtdProduto);
  }  
    return soma;
  }

float encontrarProdutoMaisCaro(struct prateleira produto[TAM]){
  float maior = produto[0].priceProduto;
  for(int i = 0; i < TAM; i++){
    if(produto[i].priceProduto > maior){
      maior = produto[i].priceProduto;
    }
  }
  return maior;
}

float encontrarProdutoMaisBarato(struct prateleira produto[TAM]){
  float menor = produto[0].priceProduto;
  for(int i = 0; i < TAM; i++){
    if(produto[i].priceProduto < menor){
      menor = produto[i].priceProduto;
    }
  } 
  return menor;
}
