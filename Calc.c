#include <stdio.h>

void mostrarMenu() {
printf("Seleccione una operación:\n");
printf("1. Suma (+)\n");
printf("2. Resta (-)\n");
printf("3. Multiplicación (*)\n");
printf("4. División (/)\n");
printf("5. Salir\n");
}


int main() {
int opcion;
float num1, num2, resultado;

do {
    mostrarMenu();
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    if (opcion == 5) {
        printf("Saliendo...\n");
        break;
    }

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

switch(opcion){

case 2:
        resultado = num1-num2;
        printf("El resultado de %.2f - %.2f = %.2f/n", num1, num2, resultado);}
        break;

case 4:
    if (num2 !=0){
        resultado = num1/num2;
        printf("El resultado de %.2f / %.2f = %.2f/n", num1, num2, resultado);}
    else{
        printf("Error, no se puede dividir entre 0/n");
    }
    break;
  
default:
    printf("Opcion no valida");
    break;
}
}while (opcion !=5){
return 0;
}
}
