#include <iostream>
#include <cstdlib>
#include "pilhas.h"

using namespace std;
/* Inicializa uma lista */
TipoPilha* InicializaPilha(){
  TipoPilha* pilha = (TipoPilha*)malloc(sizeof(TipoPilha));//aloca um espaço na memória pra armazenar uma pilha e o ponteiro lista aponta pra esse espaço de alocamento
  pilha->fundo=pilha->topo;
  return pilha;
}

/* Faz a pilha ficar vazia */
void Esvazia (TipoPilha* pilha){
  //O Tamanho do topo deve ser zero pois aí significa que não há elementos 
  pilha->topo=(TipoPonteiro)malloc(sizeof(Celula));//aloca um espaço na memória pro ponteiro que apontará pro topo da pilha
  pilha->fundo = pilha->topo;//o ponteiro q aponta pro fundo passa a apontar pro mesmo local da memória pra onde o ponteiro que aponta pro fundo aponta
  pilha->topo->prox= NULL;//o ponteiro que aponta pro próximo ( que é o prox da célula a qual o topo aponta ) recebe NULL pois como a lista tá vazia ele n aponta pra nenhum item
  pilha->Tamanho=0;//o tamanho pra uma pilha inicializada deve ser zero
}

/*verifica se a pilha tá vazia*/
int VerificaVazia(TipoPilha *pilha){
  return(pilha->topo==pilha->fundo);//estará vazia se o topo e o fundo apontarem pro mesmo local na memória
}

void Empilha(TipoItem x, TipoPilha* pilha){
  TipoPonteiro Aux;//cria um ponteiro auxiliar
  Aux = (TipoPonteiro) malloc(sizeof(Celula));//aloca um espaço na memória pro ponteiro auxiliar onde será armazenado o novo topo
  pilha->topo->item = x;//o item do topo recebe o valor que será empilhado e portanto, passa a ser o antigo topo
  Aux->prox = pilha->topo;//o próximo do novo topo passa a apontar pro topo antigo que agr contém x , ou seja, a gente tem o topo, e o próximo dele a gente aponta pro antigo topo que agora contém x
  pilha->topo = Aux;//o topo da pilha passa a apontar pro Aux que por sua vez, passa apontar pro novo topo
  pilha->Tamanho++;//o tamanho é acrescentado em 1 unidade
};

TipoItem Desempilha(TipoPilha *pilha){
  TipoPonteiro lixo;//variável do tipo ponteiro que aponta pra algum item da célula nesse caso, apontará pro item que será retirado da pilha
  if (VerificaVazia(pilha)){//pra desempilhar deve-se primeiro verificar se a pilha tá vazia
    cout << "Erro: Pilha Vazia\n"; 
  }
  lixo = pilha->topo;//o ponteiro que aponta pro lixo passa apontar pro topo, justamente por se tratar de uma pilha
  pilha->topo = lixo->prox;//o novo topo passa a pontar pro próximo do item lixo(item do topo) , ou seja pro item depois do topo
  free(lixo);//retira da memória o ponteiro que apontava pro topo da pilha (pra onde o lixo aponta)
  pilha->Tamanho--;//tamanho é decrescido em 1 unidade pois um valor foi desempilhado
  return pilha->topo->item;//retorna o valor do item do antigo topo (sai da memória).
  //NAO ENTENDI // LEMBRAR DE PEDI EXPLICAÇÃO ANTES DE BAXAR 
}

int Tamanho_pilha(TipoPilha *pilha){
  return pilha-> Tamanho;
}

void Imprime(TipoPilha* pilha){
  TipoPonteiro Aux;
  if(VerificaVazia(pilha)){
    cout << "pilha vazia\n";
  }else{
    cout << "Valores da pilha :\n";
    for(Aux = pilha->topo; Aux != pilha->fundo; Aux = Aux->prox){
      cout << Aux->prox->item.valor << endl;
    }
  }
}