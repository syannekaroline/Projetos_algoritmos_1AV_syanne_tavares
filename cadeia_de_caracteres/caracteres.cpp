#include <iostream>
#include "caracteres.h"
using namespace std;

int VerificaDigito(char caracter){
    if (caracter>='0' && caracter<='9'){
        return 1;
    }else{
        return 0;
    }
}

int VerificaLetra(char caracter){
    //função que verifica se o caracter recebido pelo parâmetro é uma letra com parando seu intervalo graças à tabela ascii que é sequêncial, retorna -1 se for uma letra minúscula; 1 se for maiúscula e retorna 0 se não for letra
    if (caracter>='a' && caracter<='z' ){
        return -1;//significa que é uma letra e é minúscula
    }else if (caracter >='A' && caracter <='Z'){
        return 1;//significa que a letra é maiúscula
    }else{
        return 0;//significa que não é letra;
    }
}

void Maiuscula(char *palavra){//recebe o ponteiro que aponta pro 1 item(item 0) da cadeia de caracter , enquanto o caracter percorrido for != de zero
    //função que trasnforma o caracter maiúscula
    for (int i=0; palavra[i] != '\0';i++){//percorre a cadeia 
        if (VerificaLetra(palavra[i])<0){
            palavra[i]=palavra[i]-'a'+'A';
        }
    }
}

int tamanho(char*palavra){
    int n=0;//variável que conta o tamanho da palavra
    for (int i=0; palavra[i]!= '\0';i++){//percorre a cadeia de caracteres até o final (onde encontra '\0')
        n++;//add uma unidade ao tamanho
    }
    return n;//retorna o tamanho
}

void concatena(char *p1,char *p2){
  int i=tamanho(p1)-1;//conta o tamanho da primeira palavra menos 1 pq a última é "/0"

  for ( int j=0; p2[j] != '\0';j++){
    p1[i]=p2[j];//o final da primeira palavra recebe o inúcio da segunda
    i++;
  }
  p2[i]='\0';//quando o loop acaba a palavra recebe "\0"
}

int compara(char*p1,char*p2){
    int i =0;
    for (i = 0 ; p1[i]!='\0' && p2[i] != 0;i++){//percorrem as duas palavras até achar o fim de alguma delas
        if ( p1[i]<p2[i]){
            return i;//significa que as palavras são diferentes e que o caracter que os difere é menor no p1  
        }
        else if(p1[i]>p2[i]){
            return i;//significa que as palavras são diferentes e que o carater que os difere maior no p1
        }
    }
    if ( p1[i]==p2[i]){
        return 0;//significa que as palavras são iguais possuem '\0' na mesma posição
    }
    else if(p2[i] != '\0'){
        return -1;//significa que a palavra 1 é menor que a p2 pq p2 ainda não chegou ao fim pois p2[i] é diferente de '/0'
    }else{
        return 1;//significa que a palavra 1 é maior que a p2 pq p1 ainda não chegou ao fim pois p1[1] é diferente de '/0'
    }
}

void inverso(char*palavra){
    int t=tamanho(palavra);

    for (int i=t;i>=0;i--){
        cout<<palavra[i];
    }
    cout<<endl;
}

void copia(char *p1,char *copiap1){
    int t=0;//variável que vai contar o tamanho da copia

    for (int i = 0;p1[i] != '\0';i++ ){//percorre a segunda palavra
        copiap1[i]=p1[i];//do final da primeira vai add a segunda palavra
        t++;//vai contando o tamanho da palavra concatenada
    }
    copiap1[t]='\0';//adiciona final da palavra copiada.
}
