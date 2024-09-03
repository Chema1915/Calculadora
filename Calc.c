#include <stdio.h>

void mostrarMenu() {
printf("Seleccione una operación:\n");
printf("1. Suma (+)\n");
printf("2. Resta (-)\n");
printf("3. Multiplicación (*)\n");
printf("4. División (/)\n");
printf("5. Salir\n");
}

float resta(float num1, float num2){
printf("\El resultado de la resta es: %f",num1-num2);
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

switch (opcion){
    case 2: 
        resta(num1,num2);
        break;
}

