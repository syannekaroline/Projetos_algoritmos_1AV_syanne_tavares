#include <iostream>
#include "lista.h"

using namespace std;
//lista base pra usar list e fila nós - salvam as informações


/* Inicializa uma lista */
//função que tem por retorno um ponteiro
TipoLista* InicializaLista(){
  TipoLista* lista = (TipoLista*)malloc(sizeof(TipoLista));//o ponteiro lista que é uma variável do TipoLista recebe um alocamento na memória do computador e esse ponteiro aponta pra essa posição que foi alocada na memória
  //função malloc indica pro sistema operacional o tamanho de bloco de memória ram que será utilizado e retorna um ponteiro do TipoLista (tá entre parenteses antes do malloc pra forçar que o ponteiro retornado sea do TipoLista que é o mesmo tipo a variável que tá recebendo esse valor(TipoLista* lista) )que indica a posição do bloco de demória que foi alocado, o argumento dessa função é o número de bytes que se quer alocar 
  return lista;//a função retorna o ponteiro lista que por sua vez armazena a posição que foi alocada na memória pra provavelmente armazenar uma lista, aponta pro primeiro elemento
}

/* Faz a lista ficar vazia : pra que uma lista se torne vazia o primeiro e o último elemento devem estar apontando pra msm direção */
void FLVazia (TipoLista* Lista) {
  Lista->Primeiro = InicioVetor;//o ponteiro lista criado anteriormente que aponta pra parte da memória que foi separada pra alocar uma lista, aponta pro primeiro elemento da lista (variável chamada posição do tipo inteiro) e recebe o valor indicado como o início do vetor que por sua vez foi definido como zero
  Lista->Ultimo = Lista->Primeiro;// iguala a posição do último elemento com o primeiro fazendo a lista se tornar vazia
}

/*Verifica se a lista está vazia*/int Vazia (TipoLista* Lista){
  return (Lista->Primeiro == Lista->Ultimo);//retorna verdadeiro(1), se a lista estiver vazia o que acontece como visto anteriormente, quando o primeiro e o última posição estão apontadas pro mesmo local na memória
}


/* Insere x após o último elemento da lista */
void Insere (TipoItem* x, TipoLista *Lista) {//recebe como parâmetro um ponteiro x que aponta pro endereço da variável que será inserido(na main esse endereço é dado como parâmetro)e o ponteiro Lista que são do TipoItem
  if (Lista ->Ultimo >= MaxTam)
    cout << "Lista está cheia" << endl;//se o último elemento da lisa estiver apontando pro tamanho máximo que ela pode receber(que foi definido como 1000) obviamente significa que a lista tá cheia
  else{//caso a lista não esteja cheia
    Lista ->Item[Lista->Ultimo] = *x; // o ponteiro lista vai apontar pro endereço do item com índice apontando pro último elemento ()ou seja o último elemento) e vai armazenar nessa posição da memória o conteúdo contido na variável cujo ponteiro x está indicando
    Lista->Ultimo++;// a última posição da lista a qual o vetor lista aponta é acrescido em 1 pois um novo elemento foi inserido já que a lista armazena itens em posição contínuas de memória
  } 
}

TipoItem* Busca(int chave, TipoLista* lista){//função que retorna um ponteiro Busca e que recebe como parâmetro um inteiro chave que é o que se está buscando e um ponteiro que aponta pra o espaço da memória onde a lista está alocada
  
  for(int i = 0; i < lista->Ultimo; i++){//for que percorre a lista da sua primeira posição que já foi definida como zero até a última posição 
    
    if(lista->Item[i].valor == chave){//se o valor contido no Item da lista for igual ao o que se tá buscando
      cout << "Item existe" << endl;
      return &lista->Item[i];//retorna o endereço desse item que é igual ao o que se estava buscando
    }else{
      cout << "Item não encontrado" << endl;
      return NULL;
    }
  }
  return NULL;
}

bool existencia( Posicao x, TipoLista* lista){//função que retorna um valor bool verificando se a chave está contida na lis
  
  for(int i = x; i > lista->Primeiro; i--){//for que percorre a lista da sua primeira posição que já foi definida como zero até a última posição 
    
    if(lista->Item[i-1].valor == lista->Item[x].valor ){//se o valor contido no Item da posição x
      return true;//retorna o endereço desse item que é igual ao o que se estava buscando
    }
  }
  return false;
}

int Tamanho_lista(TipoLista* Lista){
  if (Lista == NULL)
    return -1;
  else 
    return Lista->Ultimo;
}

/*Retorna o item x que está na posição p da lista, retirando-o da lista e deslocando os itens a partir da posição p+1 para as posições anteriores */
TipoItem* Retira (Posicao p, TipoLista* Lista) {
  int Aux; 
  TipoItem* item;
  item = (TipoItem*) malloc(sizeof(TipoItem));//o ponteiro item recebe uma alocação de espaço pra ser armazenado na memória esse espaço é o tamanho necessário pra armazenar uma variável do tipo TipoItem
  
  if (Vazia(Lista) || p >= Lista->Ultimo){//se a lista estiver vazia ou se a posição for maior ou igual ao tamanho da lista significa que naquela posição não tem item nenhum
    cout << "A posição não existe!" << endl;
    return NULL; 
  }
  *item = Lista->Item[p];//caso aquela posição estejá na lista, o valor do ponteiro item recebe o endereço do ponteiro Lista que por sua vez está apontando pro Item na armazenado na posição p, ou seja agora o ponteiro item que armazenatá o item da posição p
  Lista->Ultimo--;//o último elemento é decrescido de um pois um elemento será retirado pois passou a ser apontado pra outra posição
  
  for (Aux = p; Aux < Lista->Ultimo; Aux++)//a variável auxiliar recebe a posição a qual o item será retirado 
    //o for percorre desde a posição até o último elemento
    Lista->Item[Aux] = Lista->Item[Aux+1];//os itens são deslocados em uma posição ("voltam uma posição que foi a que foi retirada")
  return item;//retorna o valor que foi retirado uma vez que o ponteiro item passou a apontar pra esse valor
}

/*Imprime os itens da lista na ordem de ocorrência */ 
void Imprime (TipoLista* Lista){
  cout << "p - key" << endl;
  
  for (int Aux = Lista->Primeiro; Aux < Lista->Ultimo; Aux++){
    cout << Aux << " - " << Lista->Item[Aux].valor << endl;
  } 

  //A lista pode ser percorrida em qualquer posição
  /*for (int Aux = Lista->Ultimo; Aux > Lista->Primeiro; Aux--){
    cout << Aux << " - " << Lista->Item[Aux].valor << endl;
  }*/
}

//informações importantes - o primeiro e o último e o tamanho maximo - pra saber se o vetor alcançou vo valor 

//os elementos que ocorrem mais e menos em L (forneça os elementos e o número de ocorrências correspondente)
int ocorrencias(Posicao p,TipoLista* Lista){
  int vezes=0;
  
  for (int Aux = p; Aux <= Lista->Ultimo; Aux++){//percorre a lista da posição p até o último elemento contando quantas vezes ele se repete e depois conta do elemento até o primeiro 
    if (p < Lista->Ultimo && Lista->Item[p].valor == Lista->Item[Aux].valor ){
      vezes++;
    }
  }
  for (int Aux2 = p-1; Aux2 >= Lista->Primeiro; Aux2--){
    if (p>0 && Lista->Item[p].valor == Lista->Item[Aux2].valor ){
      vezes++;
    } 
  }

  return vezes; 
}

void Moda (TipoLista* Lista){
  
  ModaeMenor* moda;
  ModaeMenor* menor;
  
  moda = (ModaeMenor*) malloc(sizeof(ModaeMenor));
  menor = (ModaeMenor*) malloc(sizeof(ModaeMenor));

  moda->valorModa=0;
  menor->valorMenor=13;

  for (int Aux = 0; Aux < Lista->Ultimo; Aux++){//percorre a lista
      
    if (ocorrencias(Aux,Lista) > moda->valorModa ){
      moda->valorModa = ocorrencias(Aux,Lista);
      moda->PosicaoModa=Aux;
    }
    
    if (ocorrencias(Aux,Lista) < menor->valorMenor ){
      menor->valorMenor = ocorrencias(Aux,Lista);
      menor->PosicaoMenor=Aux;
    }
  }

  cout<<endl<< "O valor da moda é : "<< Lista-> Item[moda->PosicaoModa].valor<< " | Número de vezes que se repete : "<< moda->valorModa <<endl;
  cout<< "O valor do Item que se repete menos vezes é : "<< Lista-> Item[menor->PosicaoMenor].valor<< ", que se repete "<< menor->valorMenor << " vez"<<endl;

}

void relacaoOcorrencias(TipoLista* Lista){
  TipoLista* lista2;
  Lista2* itens2;
  itens2=(Lista2*)malloc(sizeof(Lista2));
  lista2=InicializaLista();

  for(int i=0;i<Lista->Ultimo;i++){
    itens2[i].elem=Lista->Item[i].valor;
    itens2[i].count= ocorrencias(i,Lista);
  }
  
  cout << "p  -   elem  - count" << endl;
  for(int i=0;i<Lista->Ultimo;i++){
    cout << i <<"  -     " <<itens2[i].elem << "  -  " << itens2[i].count << endl;

  }
}