#include <stdio.h>

int leNumero()
{
    int c;
    printf("Digite um numero");
    scanf( "%d", &c);
    return c;
}
int main()
{
    int r1,r2;
    r1 = leNumero();
    r2 = leNumero();
    printf("Numero Digitado 1 %d\n", r1);
    printf("Numero Digitado 2 %d\n", r2);
}