#include <iostream>
#include "caracteres.h"
#include <string.h>

/*Cadeias de caracteres
caracteres são tipos primitivos de dados 
um caracter ocupa 1 byte da memória (8bits)
n bits podem representar até 2^n caracteres ex: 8bits podem representar até 256 caracteres
caracteres podem ser representados por códigos decimais associados à tabela ASCII
*/

using namespace std;

int main (){

    //duas formas de representar um caracter
    char caracter = 's';//o caracter de fato entre aspas simples
    char s = 115;//o código decimal do caracter (representação decimal dos bits associados ao caracter de acordo com a tabela ascii)
    char palavra[100];char palavra2[]="";
    int n=115;
    int operacao;

    cout<<"Tamanho em bytes de um caracter: "<<sizeof(caracter)<<endl;
    cout<<"Imprimindo o 's' pela sua forma direta: "<<caracter<<endl;
    cout<<"Forcando a impressão do código decimal associado ao caracter 's ': "<<(int)caracter<<endl;

    cout<<"Imprimindo o 's ' por meio do seu código em decimal: "<<s<<endl;
    cout<<"Imprimindo o 's ' forçando a saída do seu código decimal: "<<(char)n<<endl;

    cout<<"Receber um caracter e verificar se é um dígito: ";
    cin>>caracter;

    //verificar por meio do código associado à tabela ascii se se trata de um dígito

    if(VerificaDigito(caracter)==1){
        cout<<"é um dígito"<<endl;
    }else{
        cout<<"Não é um dígito"<<endl;
    }  
    cout<<"1= È letra maiúscula | -1 = é letra minúscula | 0 = não é letra  : "<<VerificaLetra(caracter)<<endl;

    /*Cadeias de caracteres - Tbm chamada de strings são sequencia ordenada de caracteres, qualquer símbolo 
    associado à tabela ascii.
    Todas as funções que manipulam cadeias de caracteres (e a biblioteca padrão de C oferece várias delas) 
    recebem como parâmetro um vetor de char, isto é, um ponteiro para o primeiro elemento do vetor que 
    representa a cadeia, e processam caractere por caractere, até encontrarem o caractere nulo, que sinaliza o 
    final da cadeia. "s y a n n e \0"
    */

   cout<<"\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<"cadeias de caracteres"<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
   
   cout<<"Insira uma cadeia de caracteres: ";
   cin.ignore();
   cin.get(palavra,100);

   cout<<"Insira um digito correspondente á operação desejada: "<<"\n|1: Tranformar a palavra em maiúscula|\n|2:Verificar o tamanho|\n|3: Concatenar com outra palavra|\n|4: Comparar duas palavras|\n|5:Imprimir a palavra ao contrário|\n|6: Copia : ";
   cin.ignore();
   cin>>operacao;

  

   switch (operacao)
   {
   case 1/* constant-expression */:
       Maiuscula(palavra);
       cout<<"Palavra em caixa alta : "<<palavra<<endl;
       break;
   case 2:
        cout<<"Tamanho da palavra inserida: "<<tamanho(palavra)<<endl;
        cout<<"Tamnho da palavra inderida usando a função strlen(): "<<strlen(palavra)<<endl;
        break;
    case 3:
        cout<<"Insira uma palavra pra contatenar: ";
        cin.ignore();
        cin.get(palavra2,80);

        concatena(palavra,palavra2);
        cout<<"Palavras concatenadas: "<<palavra;

        strcat(palavra,palavra2);

        cout<<"Palavra concatenada usando strcat(): "<<palavra<<endl;
        break;
    case 4: 
        cout<<"Insira uma palavra pra ser comparada: ";
        cin.ignore();
        cin.get(palavra2,100);

        if (compara(palavra,palavra2)==0){
            cout<<"As palavras são Iguais";
        }else if(compara(palavra,palavra2)== -1){
            cout<<"As palavras são diferentes, "<<palavra<< "é menor que "<<palavra2<<endl;
        }else if (compara(palavra,palavra2)== 1){
            cout<<"As palavras são diferentes, "<<palavra<< "é maior que "<<palavra2<<endl;
        }else{
            cout<<"As palavras são diferentes na posição "<<compara(palavra,palavra2)<<endl;
        }

        cout<<"Compara usando strcmp(): "<<strcmp(palavra,palavra2)<<endl;

        break;
    case 5:
        cout<<palavra<<" ao inverso: ";
        inverso(palavra);
        break;
    case 6:

    copia(palavra,palavra2);
    cout<<palavra<<"\nCopia : "<<palavra2<<endl;
    break;
   default:
       break;
   }
}
