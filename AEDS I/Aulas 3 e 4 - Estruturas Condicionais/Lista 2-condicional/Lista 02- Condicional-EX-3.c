 //!3. Ler um n�mero inteiro, verificar e escrever se ele � divis�vel ou n�o por 7.

 /*!Um n�mero � divis�vel por 7 se o dobro do seu �ltimo algarismo subtra�do do
 n�mero sem o �ltimo algarismo, resulta em um n�mero divis�vel por 7*/

 #include <stdio.h>
int main()
{
int a;

printf("digite um numero:");
scanf("%d",&a);


if(a%7==0) //se(IF) o resto da divis�o por 7 for igual a 0, EXECUTE OS COMANDOS ABAIXO
{
    printf("%d e divisivel por 7!",a);
}
else
{
    printf("%d nao e divisivel por 7!",a);
}

return 0;
}
