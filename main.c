/* This program will help you to order 3 numbers in ascending values
 *
 *
 *Autor: Karla Alexandra Hernandez Aviles
 * fecha:13/09/2018
 * correo: A01411843@itesm.mx
 *
*/
#include <stdio.h>

//void, es una funcion que no regresa nada
void order (double *a, double *k) {
    double ord;

    if(*a > *k) {
        ord = *a;
        *a = *k;
        *k = ord;
    }
}

int main() {
    //Variables
    double num1;
    double num2;
    double num3;

    printf("This program will help you to order in ascending values 3 numbers."// se le pide al usuario 3 numeros
           " Please enter 3 numbers:  \n ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);// se escanean 3 los numeros que introdujo el usuario
    //Aqui se fijan las diferentes parejas de numeros
    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);
    //resultado de menor a mayor
    printf("The lowest=%lf\t The middle=%lf\t The highest=%lf", num1, num2, num3);

    return 0;
}