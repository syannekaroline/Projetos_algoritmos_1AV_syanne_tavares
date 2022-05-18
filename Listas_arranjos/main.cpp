#include <iostream>
#include "lista.h"
#include <cstdlib>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(void){
  TipoLista* list;
  
  TipoItem* item;
  item=(tipoitem*)malloc(sizeof(tipoitem));
  
  list = InicializaLista();
  cout << "lista vazia?: " << Vazia(list) << endl;
  
  item->valor = 10;
  
  cout << "valor a ser inserido: " << item->valor  << endl;
  Insere(item, list);
  
  item->valor = 20;
  cout << "valor a ser inserido: " << item->valor  << endl;
  Insere(item, list);
  
  cout << "lista vazia?: " <<  Vazia(list) << endl;
  cout << "Tamanho da lista: " << Tamanho_lista(list)  << endl;

  cout << "consulta pelo valor: 10"  << endl;
  Busca(10, list);
  cout << "Imprimir a Lista" << endl;
  Imprime(list);
  cout << "Remover na posicao: 0" << endl;
  Retira(0, list);
  cout << "tamanho da lista: " << Tamanho_lista(list) << endl;
  cout << "Faz a lista ficar vazia" << endl;
  FLVazia(list);
  cout << "tamanho da lista: " << Tamanho_lista(list) << endl;
  cout << "lista vazia?: " <<  Vazia(list) << endl;

//popular a lista com valores --> inserir no cin ou popular com valores aleatórios inteiros positivos
  unsigned seed = time(0);
  srand(seed);
  //preenche a lista com 10 valores aleatórios
  for (int i=0;i<10;i++){
    item -> valor = 1+rand()%10;
    Insere(item,list);
  }
  
/*
Assumindo que os elementos de uma lista L são inteiros positivos, escreva um programa que informe os elementos que ocorrem mais e menos em L (forneça os elementos e o número de ocorrências correspondente)
*/
  
  Imprime(list);

  Moda(list);
  
  /*Escreva um programa que gera uma lista L2, a partir de uma lista L1 dada, em que cada registro de L2 contém dois campos de informação . Ou seja, a variável elem contém um elemento de L1, e a variável count contém o número de ocorrências deste elemento em L1*/

  relacaoOcorrencias(list);

  
}