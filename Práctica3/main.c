#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float base, altura;
    printf("Introduzca la base del rectángulo\n");
    scanf("%f", &base);
    printf("Introduzca la altura del rectángulo\n");
    scanf("%f", &altura);
    float area = base*altura;
    printf("El area del rectángulo de base %.2f y altura %.2f es: %.2f", base, altura, area);
}