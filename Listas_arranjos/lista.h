//Listas Lineares interligam elementos de um conjunto de forma flexível podendo crescer ou diminuir de tamanho durante a execução de do programa

#define InicioVetor 0
#define MaxTam  1000
//definição dos índices de início de vetor e qual o seu tamanho máximo

typedef int Posicao;//cria um novo tipo de variável chamado posiçao que recebe um inteiro,tem as mesmas característocas de inteiros


//criação de uma struct que armazena as varíáveis de manipulação pro exercício pra indicação da moda e do que menos se repete
typedef struct modaemenor{
  //declaração das variáveis do struct 
  int valorModa;//variável que armazena o valor da moda
  int PosicaoModa;
  int valorMenor;
  int PosicaoMenor;
}ModaeMenor;

//struct com 
typedef struct lista2{
  int elem;
  int count;
}Lista2;

typedef struct tipoitem {
  int valor;
  /* outros componentes */
}TipoItem; //novo tipo de variável chamado tipoItem que contém uma variável do tipo inteiro com nome de valor

typedef struct tipolista{
  TipoItem Item[MaxTam];
  Posicao Primeiro, Ultimo;
}TipoLista;//novo tipo de variável chamado TipoLista que contém dois tipos de variáveis, TipoItem que é uma cadea de caracteres do tipo TipoItem que por sua vez são inteiros e posição que por sua vez é inteiro tbm

TipoLista* InicializaLista();
void FLVazia (TipoLista* Lista);
int Vazia (TipoLista* Lista);
int Tamanho_lista(TipoLista* Lista);
void Insere (TipoItem* x, TipoLista* Lista); 
TipoItem* Busca(int chave, TipoLista* lista);
TipoItem* Retira (Posicao p, TipoLista* Lista); 
void Imprime (TipoLista* Lista);
TipoItem* InicializaTipoItem();
void ModificaValorItem (TipoItem* x, int valor); 
void ImprimeTipoItem(TipoItem* x);
void Moda (TipoLista* Lista);
bool existencia(Posicao x, TipoLista* Lista);
int ocorrencias(Posicao p,TipoLista* Lista);
void relacaoOcorrencias(TipoLista* Lista);

