/*
pilhas são listas lineares em que todas as operações de inserção e de remoção são feitas por um único extremo denominado topo,ou seja, as pilhas são estruturas baseadas no princípio de last in first out, o últimoa entrar é o primeiro a sair
*/
#include <iostream>
#include <cstdlib>
#include "pilhas.h"

using namespace std;

int main(void){
  //declaração das variáveis
  
  int op;//variável que indica a opção
  char valor;//variável que indica o valor a ser manipulado na lista
  int ret = 0;//variável pra manipular os retornos das funções
  TipoItem x;//variável do TipoItem que contém um inteiro identificado por "chave"

  
  TipoPilha* pilha;//cria um ponteiro do TipoLista que tem um apontador pro topo da pilha
  
  pilha = InicializaPilha();//inicializa a lista - cria alocando um espaço na memória para armazena-la
  
  Esvazia(pilha);//faz a lista ficar vazia
  
  while( 1 ){
		cout << "1 - Empilhar elemento \n";
		cout << "2 - Desempilhar elemento\n";;
    cout << "3 - Tamanho da Pilha\n";
    cout << "4 - Tornar a lista vazia\n";
    cout << "5 - Mostrar a pilha: \n";
		cout << "5 - Sair\n";
		cout << "Opcao? ";
		scanf( "%d", &op );

    
		switch( op ){
      
			case 1: // inserir elemento no inicio
				cout << "Qual o valor para ser inserido no inicio da lista? ";
				cin >> valor;
        x.valor=valor;
        Empilha(x, pilha);
        cout << "valor inserido com sucesso no inicio da lista" << endl << endl;
				break;
      
			case 2: // Desempilha elemento
    
        
        cout << "valor " << Desempilha(pilha)->valor << " removido da lista" << endl << endl;
				break;
      

      case 3: //  tamanho da lista
        cout << "lista vazia?: " <<  VerificaVazia(pilha) << endl;
        cout << "Tamanho da lista: " << Tamanho_pilha(pilha)  << endl << endl;
        break;
      
      case 4: //  fazer lista vazia
        Esvazia(pilha);
        cout << "Lista ficou vazia" << endl << endl;
        break;
      
			case 5: //mostrar a pilha 
        Imprime(pilha);
        break;
      case 6: // abandonar o programa
				exit(0);
		}
	}
}
