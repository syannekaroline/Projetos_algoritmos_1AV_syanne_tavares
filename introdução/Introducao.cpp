#include <iostream>
#include <string>
#include "questoes.h"

using namespace std;

int main(){

  int questao, numero,soma_primos=0;
  string resposta;

  //exercícios de introdução
    
  cout <<"1-verifica se um número é par ou ímpar.\n2-verifica se um número é divisível por 5 e 11 ou não.\n3-verifica se um ano é bissexto ou não.\n4-Encontra todas as raízes de uma equação do segundo grau.\n5-algoritmo que receba o valor da temperatura e informe se está frio.agradável ou quente, frio para temperaturas menores que 18, Agradável para temperaturas entre 18 e 28 graus e quente para valores maiores que 28 graus.\n6-Informa se o número é primo\n7-Digitados dois números (base b e expoente e), calcule o resultado de b^e utilizando apenas multiplicações e somas.\n8-Calcule a soma de todos os números primos existentes entre 1 e 100.\n\nEscolha número correspondente ao exercício: "<< endl;
  cin>>questao;

  switch (questao)
  {
    case 1:

    cout<<"Insira um número: ";
    cin>>numero;

    resposta=(questao1(numero)==1)? "O número inserido é par " : "O número inserido é ímpar";
    cout<<resposta<<endl;
    break;

    case 2:

    cout<<"Insira um número: ";
    cin>>numero;

    resposta=(questao2(numero))? "O número é divisível por 5 e por 11": "O número não é divisível por 11 e por 5";
    cout<<resposta<<endl;
    break;

    case 3:
    cout<<"Insira o ano : ";
    cin>>numero;

    resposta=( questao3(numero) )? "O ano é bissexto" : "O Ano não é Bissexto";
    cout<<resposta<<endl;
    break;

    case 4:

    int a,b,c;
    cout<<" Equação do segundo grau ax^2 + bx + c \n Insira os coeficientes: ";
    cout<<"a = ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    
    questao4(a,b,c);
    break;

    case 5:
    
    float temp;
    cout<<"Insira o a temperatura em Graus : ";
    cin>>temp;

    questao5(temp);
    break;

    case 6:
    cout<<"Insira um número: ";
    cin>>numero;

    questao6(numero);

    break;
  
    case 7:

    int e;

    cout<<"Insira uma base: ";
    cin>>b;
    cout<<endl<<"Insira um expoente: ";
    cin>>e;

    questao7(b,e);
    
    break;

    case 8:
    //localizar e somar os números primos entre 1 e 100 e pra isso usar o laço for

    for (int i=2; i<100; i++){//percorre os números de 1 a 100

      int n=0;

      for(int d=1;d<=i;d++){//verifica os divisores de i(número percorrido)
        if(i%d == 0){
          n++;//conta o número de divisores
        }
      }
    
      if(n==2){
        soma_primos+=i;//se o número for primo, ele é somado a variável
      }

    }

    cout<<"Soma dos números primos entre 1 e 100: "<< soma_primos <<endl;

    break;
    
    default:
      cout<<"Insira um número correspondente à alguma questão!";

  }

  return 0;

}