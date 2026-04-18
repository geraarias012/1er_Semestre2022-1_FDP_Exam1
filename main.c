#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,cifra1,cifra2,cifra3,resto;
    printf("Intruduzca un numero de 3 cifras: ");
    scanf("%d", &numero);
    cifra1=numero/100;
    resto=numero%100;
    cifra2=resto/10;
    cifra3=resto%10;
    printf("%d\t %d\t %d",cifra1, cifra2, cifra3);
    return 0;
}
