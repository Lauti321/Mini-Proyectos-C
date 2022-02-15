/*CALCULO DE POTENCIAS MEDIANTE RECURSIVIDAD*/
#include <stdio.h>
int power (int n1, int n2);/*UTILIZANDO FUNCION power*/
int main() {
    int base, a, resultado;
    printf("Introduzca un numero entero(base): ");
    scanf("%d", &base);
    printf("Introduzca la potencia(Entero positivo): ");
    scanf("%d", &a);
    resultado = power(base, a);
    printf("%d^%d = %d", base, a, resultado);
    return 0;
 }

int power(int base, int a) {
	if (a != 0)
	    return (base*power(base, a - 1));
	else
	    return 1;    
}

