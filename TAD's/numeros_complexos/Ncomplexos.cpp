#include <iostream>
#include "complexos.h"

using namespace std;

Ncomplexo inicializa(double real,double imag){
    Ncomplexo NumeroComplexo;

    NumeroComplexo.real=real;
    NumeroComplexo.imaginaria=imag;
    return NumeroComplexo;
}

void imprime (Ncomplexo NumeroComplexo){
    cout<<"Parte Real: "<<NumeroComplexo.real<<"\nParte complexa: "<<NumeroComplexo.imaginaria<<"i";
    cout<<NumeroComplexo.real<<NumeroComplexo.imaginaria<<"i";
}

Ncomplexo copiar(Ncomplexo* NumeroComplexoCopia,Ncomplexo NumeroComplexo){

    NumeroComplexoCopia -> real = NumeroComplexo.real;
    NumeroComplexoCopia -> imaginaria = NumeroComplexo.imaginaria;

}
Ncomplexo somar(Ncomplexo Ncomplex1,Ncomplexo Ncomplex2){
    Ncomplexo soma;
    soma.real= Ncomplex1.real+Ncomplex2.real;
    soma.imaginaria = Ncomplex1.imaginaria +Ncomplex2.imaginaria;
    return soma;
}

bool ehreal(Ncomplexo numeroComplexo){
    bool ehreal;
    
    ehreal= (numeroComplexo.imaginaria==0)? true : false;
    return ehreal;
}