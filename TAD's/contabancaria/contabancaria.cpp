
#include <iostream>
#include "contabancaria.h"
using namespace std;

//incluir as funções que serão usadas do main e que foram decladas no arquivo .h

ContaBancaria inicializa(int contaI , double saldoI){
  ContaBancaria conta;//cria uma variável chamada conta do tipo Conta Bancária

  conta.Nconta=contaI;
  conta.valor=saldoI;

  return conta;
}

void depositar(ContaBancaria *conta, double valorInserido){   
  conta -> valor += valorInserido;
}

void sacar(ContaBancaria *conta,double valorInserido){
  conta -> valor -= valorInserido;
}

void imprimir(ContaBancaria* conta){
  cout<<"\nNúmero da Conta :" <<conta->Nconta<<"\nSaldo da conta: "<< conta->valor<<endl;
}