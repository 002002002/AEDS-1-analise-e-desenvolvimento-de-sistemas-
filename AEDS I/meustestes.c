#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    //fun��o � y=ax+b y=3*x+15
    //y=pre�o x= km rodados
    int x;
    const int a=3,b=15;
    printf("quantos km foram rodados:");
    scanf("%i", &x);

    int preco=a*x+b;
    printf("o pre�o a ser pago pela corrida �:R$%i",preco);

return 0;
}
