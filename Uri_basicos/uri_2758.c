/*  
    URI Online Judge - 2758 - "Entrada e saída de números reais"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: formatando saída de números reais
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
	
    float f1, f2;
    double d1, d2;

    scanf("%f %f", &f1, &f2);
    scanf("%lf %lf", &d1, &d2);
    printf("A = %f, B = %f\n", f1, f2);
    printf("C = %lf, D = %lf\n", d1, d2);
    printf("A = %.1f, B = %.1f\n", f1, f2);
    printf("C = %.1lf, D = %.1lf\n", d1, d2);
    printf("A = %.2f, B = %.2f\n", f1, f2);
    printf("C = %.2lf, D = %.2lf\n", d1, d2);
    printf("A = %.3f, B = %.3f\n", f1, f2);
    printf("C = %.3lf, D = %.3lf\n", d1, d2);
    printf("A = %.3E, B = %.3E\n", f1, f2);
    printf("C = %.3E, D = %.3E\n", d1, d2);
    printf("A = %.0f, B = %.0f\n", f1, f2);
    printf("C = %.0lf, D = %.0lf\n", d1, d2);

    return 0;
}