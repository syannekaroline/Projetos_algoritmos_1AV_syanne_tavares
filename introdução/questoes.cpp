#include <iostream>
#include <math.h>
#include "questoes.h"

using namespace std;

int questao1(int numero){
    //verifica se o número é par, ou seja, quendo o resto da divisão por 2 é igual a zero
    if (numero%2 == 0){
       return 1;     
    }else{
        return 0;
    }
}

int questao2(int numero){
    //verifica se o número é divisível por 5 e por 11, ou seja, quendo o resto da divisão por eles é igual a zero
    if (numero%5 == 0 && numero%11==0){
       return 1;     
    }else{
        return 0;
    }
}

int questao3(int numero){
    //verifica se o ano é bissexto
    if (numero%4 == 0 && numero%100 ==0 && numero%100==0 && numero%400 == 0 ){
        return 1;     
    }else{
        return 0;
    }
}

void questao4(int a,int b,int c){
    float delta,x1,x2;
    cout<<a<<"x^2 + "<<b<<"x + "<<c<<endl;

    delta=pow(b,2)-4*a*c;
    cout<<delta;
    cout<<sqrt(delta);

    x1=(-b + sqrt(delta))/(2*a);
    x2=(-b -sqrt(delta))/(2*a);

    cout<<"Raízes: x1= "<<x1<<" ,x2= "<<x2;

}

void questao5(float temp){
    //algoritmo que receba o valor da temperatura e informe se está frio.agradável ou quente, frio para temperaturas menores que 18, Agradável para temperaturas entre 18 e 28 graus e quente para valores maiores que 28 graus.
    if (temp<18){
        cout<<"Está frio!!"<<endl;
    }
    else if (temp>=18 && temp <28 ){
        cout<<"Está agradável!"<<endl;
    }
    else if (temp>28){
        cout<<"Está Quente !!";
    }
}

void questao6 (int numero){

    int n=0;

    for (int i=1; i<=numero; i++){
        //vai dividindo o número com divisores de 1 até ele próprio

        if(numero%i == 0){
            n++;
        }
    }

    if(n==2){
        cout<<"O número é primo"<<endl;
    }
    else{

        cout<<"O número não é primo\n";
        cout<<"Divisores: "<<endl;
    
        for (int i= 1;i<=numero;i++){
    
            if(numero%i == 0 ){
                cout<<i<<" "; 
                cout<<endl;
            }
        }
    }
}

void questao7(int b, int e){
    int resultado;

    //multiplicar b,e vezes
    resultado=b;
    //usando produtos
    for(int i=1;i<e;i++){
        resultado=resultado*b;
    }
    cout<<"resultado usando multiplicações: "<<resultado<<endl;

    //usando somas
    //2^3 --> 2.2.2 ou 2+2+2+2 - dois somado duas vezes e esse resultado somado duas vezes novamente
    //multi 3.3= 3 somado 3 vezes
    //2^4 --> 2^2.2^2 ou -->( 2+2 ) + (2+2)+(2+2) + (2+2)
    //4^3 = 4.4.4 = (4+4+4)+(4+4+4)+(4+4+4)+(4+4+4)
  
    int soma = b,c=0,j=b;

    for(int i=1;i<e;i++){
        for(int c=1;c<b;c++){//b.b = b+b - b vezes
            soma=soma+j;
        }
        j=soma;//j se torna o resultado da soma que será somado mais n vezes 
    }
    cout<<"Seu resultado usando somas é: "<<j<<endl;

}