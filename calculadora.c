#include <stdio.h>
/*Calculadora b�sica*/

int main() {
   
    int n1;
    int n2;
    char op;

    printf ("Introduzca el primer operando (Solo enteros): ");
    scanf ("%d", &n1);

    printf("Introduzca el operando: ");
    scanf (" %c", &op); //%c ==> car�cter simple//

    printf("Introduzca el primer operando (Solo enteros): ");
    scanf ("%d", &n2);

    if (op == '+')
        printf("%d", n1 + n2);
        
    else if (op == '-')
        printf("%d", n1 - n2);
        
    else if (op == '*')
        printf("%d", n1 * n2);
		    
    else if (op == '/')
        printf("%d", n1 / n2);
        
    else
        printf("Operador invalido");    

    return 0;
}