#include <iostream>
#include <cstdlib>
#include "pilhas.h"

using namespace std;
/* Inicializa uma lista */
TipoPilha* InicializaPilha(){
  TipoPilha* pilha = (TipoPilha*)malloc(sizeof(TipoPilha));//aloca um espaço na memória pra armazenar uma pilha e o ponteiro lista aponta pra esse espaço de alocamento
  pilha->fundo=pilha->topo;//o ponteiro que aponta pro fundo deve apontar pra mesma direção do topo - significando que a pilha inicializa vazia
  return pilha;
}

/* Faz a pilha ficar vazia */
void Esvazia (TipoPilha* pilha){
  //O Tamanho do topo deve ser zero pois aí significa que não há elementos 
  pilha->topo=0;
  
}

/*verifica se a pilha tá vazia*/
int VerificaVazia(TipoPilha *pilha){
  return(pilha->topo==0);
}

void Empilha (TipoItem x, TipoPilha *pilha){
  //primeiro deve-se verificar se a pilha tá cheia 
  if (pilha->topo==MAXTAM){
    cout<<"A lista está cheia, sorry :("<<endl;
  }
  else{//se não estiveer cheia
    pilha->item[pilha->topo]=x;//o ponteiro que aponta pro item que está na posição do ponteiro que aponta pro topo recebe o valor x que será o valor empilhado
    pilha->topo++;//o topo é acrescido em uma unidade pois foi acrescentado um item no antigo topo
  }
}

TipoItem *Desempilha (TipoPilha *pilha){
  TipoItem *item;//cria um variável do tipo item que é um ponteiro item
  item= (TipoItem*)malloc(sizeof(TipoItem));//aloca um espaço na memória pro item
  //primeiro deve-se verificar se apilha tá vazia
  if (VerificaVazia(pilha)){//verifica se a lista tá vazia 
    return NULL;
  }
  else{//se não estiver vazia 
    pilha->topo--;//o topo é descrescido uma unidade pois o item do topo será retirado uma vez ue se trata de uma pilha então o topo passa a apontar pro último elemento da pilha
    *item = pilha->item[pilha->topo];//o ponteiro item recebe o valor do item que vai ser retornado que é o item ao qual o ponteiro do topo aponta 

    return item;
  }
}

int Tamanho_pilha(TipoPilha *pilha){
  return pilha-> topo;
}

void Imprime (TipoPilha* pilha){
  cout << "Pilha: " << endl;

 for(int i = pilha->topo-1; i >= 0; i--){
    cout << pilha->item[i].valor << endl;
  }
  cout<<endl;
}