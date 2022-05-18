/*
Implemente um TAD Número Complexo cada número possui os campos real e imaginário Implemente as operações:
n Inicializa: atribui valores para os campos
n Imprime: imprime o número da forma “R + Ci”
n Copia: Copia o valor de um número para outro
n Soma: Soma dois números complexos
n EhReal: testa se um número é real
*/

typedef struct{
    double real;
    double imaginaria;
}Ncomplexo;

Ncomplexo inicializa(double,double);

void imprime (Ncomplexo);
Ncomplexo copiar(Ncomplexo*,Ncomplexo);
Ncomplexo somar(Ncomplexo,Ncomplexo);
bool ehreal(Ncomplexo);