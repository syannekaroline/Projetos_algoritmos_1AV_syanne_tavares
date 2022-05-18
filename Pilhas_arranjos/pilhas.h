#define MAXTAM 1000 
//defini o tamanho máximo da pilha

typedef char TipoPonteiro;//cria o novo tipo de variável chamada tipo Ponteiro que terá as msm características de um inteiro
typedef char TipoValor;

typedef struct{
  TipoValor valor;
}TipoItem;//cria um novo tipo de variável chamada TipoItem que contém uma variável do TipoValor chamada valor

typedef struct{
  TipoItem item[MAXTAM];
  TipoPonteiro topo,fundo,prox;
}TipoPilha;

// typedef struct {
//   TipoPonteiro topo;
//   int Tamanho;
  
// }TipoPilha;//cria um novo tipo de variável chamada TipoPilha que contém uma cadeia de valores inteiros(TipoItem) e um TipoPonteiro que aponta irá apontar pro topo

// typedef struct {
//   TipoItem item;
//   TipoPonteiro prox;
// }Celula;

TipoPilha* InicializaPilha();
void Esvazia (TipoPilha* ); 
int VerificaVazia (TipoPilha *);
void Empilha (TipoItem , TipoPilha *); 
TipoItem* Desempilha (TipoPilha *);
void Imprime (TipoPilha* );
int Tamanho_pilha(TipoPilha* );
// int Busca(TipoItem, TipoPilha* );