#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura;
    float area;

    printf("\nEntre com a base do triangulo: ");
    scanf("%f", &base);

    printf("\nEntre com a altura do triangulo: ");
    scanf("%f", &altura);

    area=(base * altura)/2;

    printf("\nA area do triangulo e: %.2f\n\n", area);

    getche();
    return 0;
}
