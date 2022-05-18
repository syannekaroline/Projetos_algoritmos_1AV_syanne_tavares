#include <iostream>
#include <cstdlib>
#include "lista.h"

using namespace std;

int main(void){
  //declaração das variáveis
  
  int op;//variável que indica a opção
  int valor;//variável que indica o valor a ser manipulado na lista
  int ret = 0;//variável pra manipular os retornos das funções
  TipoItem x;//variável do TipoItem que contém um inteiro identificado por "chave"
  Apontador E;//Variável do tipo apontador que é um ponteiro que sempre aponta próximo item da lista que por sua vez tá contido na célula que contém sempre um item e um ponteiro "prox"

  E = (Apontador) malloc(sizeof(Celula));//é alocado um espaço na memória que irá armazenar o apontador E, esse espaço tem o tamanho de uma variável do tipo apontador 
  
  TipoLista* list;//cria um ponteirodo TipoLista que tem um apontador pro prmeiro ou último elemento
  
  list = InicializaLista();//inicializa a lista - cria alocando um espaço na memória para armazena-la
  
  FLVazia(list);//faz a lista ficar vazia
  
  while( 1 ){
		cout << "1 - Inserir elemento no inicio\n";
    cout << "2 - Inserir elemento no final\n";
		cout << "3 - Remover elemento\n";
    cout << "4 - Remover o último elemento da Lista\n";
		cout << "5 - Mostrar lista\n";
    cout << "6 - Consultar elemento\n";
    cout << "7 - Tamanho da lista\n";
    cout << "8 - Tornar a lista vazia\n";
		cout << "9 - Sair\n";
		cout << "Opcao? ";
		scanf( "%d", &op );

    
		switch( op ){
      
			case 1: // inserir elemento no inicio
				cout << "Qual o valor para ser inserido no inicio da lista? ";
				cin >> valor;
        x.Chave = valor;//
        E = list->Primeiro;
        Insere (x, list, E);
        cout << "valor inserido com sucesso no inicio da lista" << endl << endl;
				break;
      
      case 2: // inserir elemento no final
				cout << "Qual o valor para ser inserido no final da lista? ";
				cin >> valor;
        x.Chave = valor;
        E = list->Ultimo;
        Insere (x, list, E);
        cout << "valor inserido com sucesso no final da lista" << endl << endl;
				break;
			case 3: // remover elemento no começo
        E = list->Primeiro;
        x =  RetiraIni(E, list);
        cout << "valor " << x.Chave << " removido da lista" << endl << endl;
				break;
      case 4://remover o último elemento da lista
        E = list->Ultimo;
        x =  RetiraUltimo(E, list);
      
			case 5: // mostrar os valores da lista
				Imprime(list);
				break;
			case 6: //  consulta por valor
        cout << "Qual o valor para consultar? ";
				cin >> valor;
        ret = Busca(valor, list);
        if(ret == 1){
          cout << "Valor " << valor << " encontrado na lista" << endl << endl;
        }else{
          cout << "Valor " << valor << " não encontrado na lista" << endl << endl;
        }
				break;
      case 7: //  tamanho da lista
        cout << "lista vazia?: " <<  Vazia(list) << endl;
        cout << "Tamanho da lista: " << Tamanho_lista(list)  << endl << endl;
        break;
      case 8: //  fazer lista vazia
        FLVazia(list);
        cout << "Lista ficou vazia" << endl << endl;
        break;
			case 9: // abandonar o programa
				exit(0);
		}
	}
}