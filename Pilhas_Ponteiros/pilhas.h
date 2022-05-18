/* Representações/estruturação da pilha com ponteiros - arquivo de cabeçalho - Especificações*/

//defini o tamanho máximo da pilha
#define MAXTAM 1000


typedef int TipoValor;

typedef struct{
  TipoValor valor;
}TipoItem;//cria um novo tipo de variável chamada TipoItem que contém uma variável do TipoValor chamada valor

typedef struct Celula *TipoPonteiro;

typedef struct Celula{
  TipoItem item;
  TipoPonteiro prox;

}Celula;

typedef struct TipoPilha{
  TipoPonteiro topo,fundo;
  int Tamanho;
  
}TipoPilha;//cria um novo tipo de variável chamada TipoPilha que contém uma cadeia de valores inteiros(TipoItem) e um TipoPonteiro que aponta irá apontar pro topo

TipoPilha* InicializaPilha();
void Esvazia (TipoPilha* ); 
int VerificaVazia (TipoPilha *);
void Empilha (TipoItem , TipoPilha *); 
TipoItem Desempilha (TipoPilha *);
void Imprime (TipoPilha* );
int Tamanho_pilha(TipoPilha* );
// int Busca(TipoItem, TipoPilha* );

