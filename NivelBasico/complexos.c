// Incluindo bibliotecas para calculo
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    float m, x, y, f;

    printf("Entre o valor do modulo do numero complexo: ");
    scanf("%f", &m);

    printf("Entre com o valor de angulo em graus: ");
    scanf("%f", &f);

    f *= M_PI / 180;
    x = m * cos(f);
    y = m * sin(f);

    printf("\nO numero complexo => %.2f + %.2fi\n\n", x, y);

    m = sqrt(pow(x, 2) + pow(y, 2));

    f = atan2(y, x);

    printf("%.2f<%.2f", m, f, "\n\n");
    return 0;

}
