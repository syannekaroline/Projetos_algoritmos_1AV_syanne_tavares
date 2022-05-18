//o que muda é a estruturação da lista mas a forma de remover inserir.. é a mesma


//typedef int TipoChave;

typedef struct  {
  int Chave;
  /* outros componentes */
}TipoItem;//um novo tipo de variável (TipoItem) é criado e vai armazenar itens do tipo inteiro



typedef struct Celula_str{//nó - Guarda informações sobre cada elemento por isso é uma estrutura que possui o item e o ponteiro para o próximo elemento
  TipoItem Item;//váriável do tipoItem(Ou seja um inteiro) que é o item em si
  Apontador Prox;//variável que aponta pro Endereço do próximo elemento da lista pois os elementos não estão contínuos na memória pelo fato de ser alocação dinâmica
} Celula;//cria-se um novo tipo de variável do tipo  Celula que armazena dois tipos de Variáveis

typedef struct Celula_str *Apontador;//cria um ponteiro que vai apontar pro apontador do tipo célula que por sua vez aponta pro próximo item 

typedef struct{
  Apontador Primeiro, Ultimo;
} TipoLista;//criado um novo tipo de variável (TipoLista) que armazena um apontador, que pode ser o primeiro ou o último da lista

//declara as funções

TipoLista* InicializaLista();
void FLVazia (TipoLista* ); 
int Vazia (TipoLista *);
void Insere (TipoItem , TipoLista *, Apontador); 
TipoItem RetiraIni (Celula*, TipoLista *);
TipoItem RetiraUltimo (Celula*, TipoLista *);
void Imprime (TipoLista* );
int Tamanho_lista(TipoLista* );
int Busca(int , TipoLista* );

//TODO: funções a serem implementadas
TipoItem* InicializaTipoItem();
void ModificaValorItem (TipoItem*, int ); 
void ImprimeTipoItem(TipoItem* );