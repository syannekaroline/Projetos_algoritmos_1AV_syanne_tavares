#include <iostream>
#include <cstdlib>
#include "lista.h"

using namespace std;

/* Inicializa uma lista */
TipoLista* InicializaLista(){
  TipoLista* lista = (TipoLista*)malloc(sizeof(TipoLista));//aloca um espaço na memória pra armazenar uma lista e o ponteiro lista aponta pra esse espaço de alocamento
  return lista;
}

/* Faz a lista ficar vazia */
void FLVazia (TipoLista* Lista) {
  Lista->Primeiro = (Apontador) malloc(sizeof(Celula));//cria um espaço na memória pra armazenar o ponteiro que aponta pro primeiro item da lista e faz a lista apontar pra ele
  Lista->Ultimo = Lista->Primeiro;//faz com que ponteiro que aponta pro último seja o mesmo do preimeiro -- significa que a lista vai ficar vazia
  Lista->Primeiro->Prox = NULL;//os dois ponteiros recebem valor nulo pois aí de fato estará vazia (se isso não ocorrece poderiam estar apontando pra algum lixo alocado na memória)
}

/*Verifica se a lista está vazia*/
int Vazia (TipoLista* Lista){
  return (Lista->Primeiro == Lista->Ultimo);//compara se o ponteiro que aponta pra primira também apontar pra última posição se sim então significa que a lista tá vazia
}

/* Insere x após o último elemento da lista */
void Insere (TipoItem x, TipoLista *Lista, Apontador E) {
  Apontador novo;//cria um ponteiro que vai apontar pro novo item
  novo = (Apontador) malloc(sizeof(Celula));//aloca um espaço na memória pra esse apontador
  novo->Item = x;//o ponteiro novo aponta pro item x que será inserido
  novo->Prox = E->Prox;//o próximo do novo valor vai ser o mesmo do E( lembrando que o E vai apontar pro último elemento da lista(pelo main, linha 53) ou seja, o proximo do novo item estará apontando pro último 
  if(Lista->Primeiro->Prox == NULL)//se o ponteiro do primeiro 
    Lista->Ultimo = novo;//o último valor da lita recebe o novo valor que por sua vez vai ter apontador apontando pra última posição
  if(Lista->Ultimo == E)//se o ponteiro que aponta pro último for igual ao E então é pq 
    Lista->Ultimo = novo;
  E->Prox = novo;
  
}

/*Retorna o item x que está na posição p da lista, retirando-o da lista e deslocando os itens a partir da posição p+1 para as posições anteriores */
TipoItem RetiraIni (Celula* cel, TipoLista *Lista) {
  Apontador lixo;//cria um ponteiro lixo do tipo apontador
  lixo = (Apontador) malloc(sizeof(Celula));//aloca um espaço da memória pra armazenar o ponteiro lixo
  lixo = cel->Prox;// o lixo passa a apontar pro segundo elemento pois o cel aponta pro primeiro então se ele aponta pro próximo do primeiro na vdd ele tá apontando pro segundo
  cel->Prox = lixo->Prox;//a cel passa a apontar pro próximo do lixo pois esse lixo vai ser retirado então o cell-> próx aponta pro próximo ao qual o lixo apontava
  TipoItem item = lixo->Item;//cria um item(contém um inteiro) que recebe o item do lixo pois o ponteiro lixo aponta justamento pro Item da célula
  //cout << "teste " << lixo->Item.Chave << endl;
  if (Lista->Ultimo == lixo)//se o ponteiro último apontar pra mesma célula que o lixo significa que na vdd a lista só tem 1 elemento pois o lixo aponta pro próximo do elemento que vai pro lixoe se esse é o último da lista então a lista ficará vazia
    Lista->Ultimo == Lista->Primeiro;//lista fica vazia
  free (lixo);//libera esse espaço da memória
  return item;
}

/*Retorna o tamanho da lista  */
int Tamanho_lista (TipoLista* Lista){
  int count = 0;
  Apontador p = (Apontador) malloc(sizeof(Celula));
  if (Lista->Primeiro->Prox != NULL)
    for (p = Lista->Primeiro->Prox; p != NULL; p = p->Prox) {
		  count ++;
	  }
  return count;
}

/*Imprime os itens da lista na ordem de ocorrência  */
void Imprime (TipoLista* Lista){
  if (Lista->Primeiro->Prox == NULL)
    cout << "Lista vazia" << endl << endl;
  else{
    cout << "Valores na lista" << endl;
    Apontador p = (Apontador) malloc(sizeof(Celula));
    for (p = Lista->Primeiro->Prox; p != NULL; p = p->Prox) {
		  cout <<  p->Item.Chave << endl;
	  }
    cout << endl;
  }
}
int Busca(int chave, TipoLista* Lista){
  Apontador p = (Apontador) malloc(sizeof(Celula));
  for (p = Lista->Primeiro->Prox; p != NULL; p = p->Prox) {
    if(p->Item.Chave == chave){
      return 1;
      break;
    }else{
      return 0;
    }
	}
  return 0;
}

TipoItem RetiraUltimo (Celula* cel, TipoLista *Lista){
  Apontador lixo;
  lixo = (Apontador) malloc(sizeof(Celula));
  Apontador p = (Apontador) malloc(sizeof(Celula));


  //primeiro: localizar o penúltimo elemento da lista(que na vdd é o último item contendo valor (chave))
  //o cálula que aponta pro último tem que ser retirada 
  //o lixo deve apontar pra ela e a célula que apontava pra ela deve apontar pro último
  for (p = Lista->Primeiro->Prox; p != NULL; p = p->Prox) {
    if(p->Item == Chave){
      lixo = cel->Prox;
      }
  }
}