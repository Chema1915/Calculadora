#include <stdio.h>

void mostrarMenu() {
    printf("Seleccione una operación:\n");
    printf("1. Suma (+)\n");
    printf("2. Salir\n");
}

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        mostrarMenu();
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        if (opcion == 2) {
            printf("Saliendo...\n");
            break;
        } else if (opcion == 1) {
            printf("Ingrese el primer número: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo número: ");
            scanf("%f", &num2);

            // Realizar la suma
            resultado = num1 + num2;
            printf("Resultado de la suma: %.2f\n", resultado);
        } else {
            printf("Opción no válida. Por favor, seleccione la opción 1 para suma o 2 para salir.\n");
        }

    } while (1); // El bucle continuará hasta que se elija la opción de salida

    return 0;
}

