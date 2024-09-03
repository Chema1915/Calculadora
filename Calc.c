#include <stdio.h>

void multi(int a, int b) {
    printf("El resultado de (%d) * (%d) es: %d\n", a, b, a * b);
}

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

        switch(opcion) {
            case 1: // Opción de suma
                resultado = num1 + num2;
                printf("El resultado de %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2: // Opción de resta
                resultado = num1 - num2;
                printf("El resultado de %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3: // Opción de multiplicación
                multi((int)num1, (int)num2); // Convertimos float a int para la función multi
                break;
            case 4: // Opción de división
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("El resultado de %.2f / %.2f = %.2f\n", num1, num2, resultado);
          
