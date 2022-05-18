#include <iostream>
#include "contabancaria.h"

using namespace std;

int main(){

  int contaI,op=0;
  double saldoI,valorInserido;
  ContaBancaria conta;//declarei uma variável chamada conta que é no tipo de dado ContaBancaria que possui como dados um valor inteiro do numero da conta e um valor double pro saldo

  cout<<"Insira um numero da conta pra iniciar: ";
  cin>>contaI;

  cout<<"Insira um saldo pra inicializar a conta: ";
  cin>>saldoI;

  conta = inicializa(contaI,saldoI);

  while ( op != 4){
    cout<<"Qual operação vc deseja realizar?\n|1 : Deposito \n|2: saque\n|3: imprimir saldo\n|4: sair: ";
    cin>>op;

    if (op==1){
      cout<<"Insira um valor pra ser depositado na conta: ";
      cin>>valorInserido;

      depositar(&conta,valorInserido);//recebe o endereço da conta e o Valor inserido
    }
    else if(op==2){
      cout<<"\nInsira um valor pra ser sacado da conta: ";
      cin>>valorInserido;

      sacar(&conta,valorInserido);
    }
    else if (op==3){
      imprimir(&conta);
    }
    else {
      cout<<"\nInsira um valor que seja correspondente a uma operação "<<endl;
    }
  }
   
  cout<<"\nSaldo antes das operações : R$"<<saldoI<<endl;
  cout<<"Saldo depois das operações: R$"<<conta.valor<<endl;

}