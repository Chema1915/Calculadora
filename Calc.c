#include <stdio.h>

void multi (int a,int b);

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
//------------------------------------------
switch(opcion)
{
    case 3: multi(num1,num2);
        break;
}


void multi (int a,int b)
{
    printf("El resultado de (%d)(%d) es: %d",a,b,a*b);
}
