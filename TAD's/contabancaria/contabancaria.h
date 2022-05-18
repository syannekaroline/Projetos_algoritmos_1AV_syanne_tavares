/*
Implemente um TAD ContaBancaria, com os campos número e saldo onde os clientes podem fazer as seguintes operações:
 ̈Iniciar uma conta com um número e saldo inicial
 ̈Depositar um valor
 ̈Sacar um valor
 ̈Imprimir o saldo
n Faça um pequeno programa para testar o seu TAD
*/

//criar os TAD - tipos de dado abstrato que vai ser necessário pra resolução do problema

typedef struct{
  int Nconta;//cria um campo Nconta que possui as características de um inteiro
  double valor;//cria um campo valor que armazena informações com as características de um double
}ContaBancaria;//tipos de dados de conta bancária - cria um novo tipo de variável que contém 2 campos 

//arquivo .h -> declaração das funções que serão usadas no main principal

//tipo de retorno nome  (parâmetros necessários)
ContaBancaria inicializa(int,double);
void depositar(ContaBancaria*,double);
void sacar(ContaBancaria*,double);
void imprimir(ContaBancaria * );