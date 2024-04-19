#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
    float num1, num2, suma, resta, mult, div;

    p("Ingrese el primer valor: ");
    s("%f", &num1);
    p("Ingrese el segundo valor: ");
    s("%f", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    p("%f + %f = %f\n", num1, num2, suma);
    p("%f - %f = %f\n", num1, num2, resta);
    p("%f * %f = %f\n", num1, num2, mult);
    p("%f / %f = %f\n\n", num1, num2, div);

    return 0;
}
