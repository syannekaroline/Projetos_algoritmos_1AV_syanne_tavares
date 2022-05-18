#include <iostream>
#include "complexos.h"

using namespace std;

int main (){

    Ncomplexo a,b,soma,copia;
    double real,imag;
    int op;

    cout<<"Insira a parte real de um número Complexo: ";
    cin>>real;

    cout<<"Insira a parte imaginária de um número Complexo: ";
    cin>>imag;

    a=inicializa(real,imag);

    cout<<"Insira o número correspondente à operação desejada: \n|1:soma|\n|2:copia|3:imprime|4:verifica se o número é real";
    cin>>op;

    if (op==1){
        cout<<"Insira um número imaginário pra ser somado "<<endl;
        cout<<"Parte real: ";
        cin>>real;
        cout<<"Parte imaginária: ";
        cin>>imag;

        b=inicializa(real,imag);

        soma = somar(a,b);

        cout<<"A soma entre "<<a.real<<a.imaginaria<<"i e "<<b.real<<b.imaginaria<<"i é: ";
        imprime(soma);

    }
    else if (op==2){

        copiar(&copia,a);
        imprime(copia);
    }
    else if(op==3){
        imprime(a);
    }
    else if(op==4){
        cout<<"O número Inserido é real? "<<ehreal(a);
    }

}