/*
1) Fa�a um programa que:
- Defina um vetor com 6 posi��es
- Atribua os valores
1,0,5,-2,-5,7

Armazena numa vari�vel a soma dos elementos das posi��es: 0,1,5

- Modifique o elemento da posi��o 4 para 10

mostre na tela os elementos�do�vetor
 */

 #include <stdio.h>
 int main(){
     int v[6]={1,0,5,-2,-5,7}; //declarei uma variavel v, e essa variavel � um vetor[] que possui 6 espa�os, e os numeros ocupados nessas posi�oes s�o: 1,0,5,-2,-5,7
     //for(inicializa��o,condi��o de parada,incremento)
     /*n�o confunda, o vetor sempre come�a do 0, no exemplo acima, meu vetor tem 6posi��es {0,1,2,3,4,5}, ent�o no meu for ou eu coloco i<6 ou i<=5, pq se colocar
      que � =6 eu vou contabilizar 7 casas*/
     int soma=v[0]+v[1]+v[5];
     printf("soma:%d",soma);








     for(int i=0;i<6;i++){
        printf("%d\n",v[i]); //v[i] estou acessando as posi��es do vetor v na variavel i do for
}




 return 0;
 }
