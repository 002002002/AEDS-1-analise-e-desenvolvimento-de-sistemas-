/*! Fa�a um programa para ler dois n�meros inteiros e
 multiplic�-los sem utilizar a
opera��o de multiplica��o*/
#include <stdio.h>
int main()
{
int n1,n2,i,soma;

printf("numero1:\n");
scanf("%i",&n1);

printf("n2:\n");
scanf("%i",&n2);

for(i=1;i<= n2;i++){
  soma +=n1;
        printf("produto:%i",soma);

}


return 0;
}
