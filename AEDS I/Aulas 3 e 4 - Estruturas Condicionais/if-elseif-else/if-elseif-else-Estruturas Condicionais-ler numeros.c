/*!Exerc�cio
 � Leia dois n�meros.
� Se um deles for maior que 45, realize a soma dos mesmos.
� Caso contr�rio, se os dois forem maior que 20, realize a
subtra��o do maior pelo  menor,
� Sen�o, se um deles for menor do que 10 e o outro diferente de 0
realize a  divis�o do primeiro pelo segundo.
� Finalmente, se nenhum dos casos solicitados for  v�lido, mostre
seu nome na tela.*/

#include <stdio.h>
int main(){
   float a,b,resultado;

   printf("valor1:");
   scanf("%f",&a);

   printf("valor2:");
   scanf("%f",&b);


   if( a>45)
   {
       resultado=a+b;
        printf("soma %f",resultado);
   }
   else if(a>20 && b>20)
   {
       if(a>b)
       {
           resultado= a-b;
           printf("soma %f",resultado);
       }
       else
       {
           resultado= b-a;
           printf("subtracao %f",resultado);
       }

   }
   else if (a<10 && b!=0)
   {
       resultado=a/b;
        printf("divisao %f",resultado);
   }
   else if (b<10 && a!=0)
   {
       resultado=b/a;
        printf("divisao %f",resultado);
   }

   else
   {
   printf("kaua");
   }








return 0;
}
