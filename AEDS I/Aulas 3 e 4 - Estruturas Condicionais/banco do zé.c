/*! O banco do Z� abriu uma linha de cr�dito para os seus clientes.
O valor m�ximo da presta��o n�o poder� ultrapassar 40% do
sal�rio bruto. Fa�a um algoritmo que permita entrar com o
sal�rio bruto e o valor da presta��o e informar se o  empr�stimo
ser� concedido.*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

 float sb,vp;// sal�rio bruto e valor da presta��o
//!aprende de uma vez por todas voce n�o coloca nada no print f a n�o ser texto se vc escanear, %f... &, nada
 printf("sal�rio bruto:\n");
 scanf("%f",&sb);

printf("valor da presta��o:\n");
 scanf("%f",&vp);

 const float desconto= 0.4;

if(vp<=desconto*sb)
{
  printf("emprestimo sera concedido.");
}
else
{
   printf("emprestimo negado.");
}






return 0;
}
