/*!
Lista 03- Repeti��o
1. Fazer um programa para ler n n�meros inteiros e imprimir a soma deles. O n valor de
deve ser lido do teclado.
*/
#include <stdio.h>
int main()
{
    int n;//n � a minha repeti��o, ent�o i<n ou i at� n

    printf("digite quantos numeros que vc quer somar:\n");
    scanf("%i",&n);

    int soma=0;// variavel somar os numero guardados
    int numero;//criei essa variavel para guardar os numeros que eu vou somar

    for(int i=0; i<n; i++)
    {
        printf("Digite um numero:");
        scanf("%i",&numero);

        soma+=numero; // Isso acontece a cada repeti��o, de forma "invis�vel"
    }

    //print o resultado da
    printf("Resultado:%i\n",soma);


    return 0;
}
