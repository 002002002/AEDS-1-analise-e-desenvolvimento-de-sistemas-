/*Estrutura sequencial: ler os valores dos catetos de um tri�ngulo ret�ngulo
   e mostrar a hipotenusa */
   #include <stdio.h>
   #include <math.h>
   //o quadrado da hipotenusa � igual � soma dos quadrados dos catetos
   //a�=b�+c�
   //teste, a gente sabe que quando os catetos s�o 4 e 3 a hipotesa � igual a 5
   int main(){

   float b,c;
   /*cateto b*/
   printf("cateto b:");
   scanf("%f",&b);

   /*cateto c*/
   printf("cateto c:");
   scanf("%f",&c);

   float a=sqrt((pow(b,2)+pow(c,2)));

   printf("hipotenusa:%.1f",a);





   return 0;
   }
