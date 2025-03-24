#include <stdio.h>

void convertirMoneda(float cantidad, int opcion) {
    float resultado;
    
    // Conversión a Dólares, Euros y Quetzales
    switch(opcion) {
        case 1: // Convertir de Quetzales a Dólares y Euros
            printf("Ingrese la cantidad en Quetzales (GTQ): ");
            scanf("%f", &cantidad);
            printf("%.2f Quetzales son equivalentes a %.2f Dólares.\n", cantidad, cantidad / 7.75); // Tasa de cambio GTQ -> USD
            printf("%.2f Quetzales son equivalentes a %.2f Euros.\n", cantidad, cantidad / 8.60); // Tasa de cambio GTQ -> EUR
            break;
        case 2: // Convertir de Dólares a Quetzales y Euros
            printf("Ingrese la cantidad en Dólares (USD): ");
            scanf("%f", &cantidad);
            printf("%.2f Dólares son equivalentes a %.2f Quetzales.\n", cantidad, cantidad * 7.75); // Tasa de cambio USD -> GTQ
            printf("%.2f Dólares son equivalentes a %.2f Euros.\n", cantidad, cantidad * 0.94); // Tasa de cambio USD -> EUR
            break;
        case 3: // Convertir de Euros a Quetzales y Dólares
            printf("Ingrese la cantidad en Euros (EUR): ");
            scanf("%f", &cantidad);
            printf("%.2f Euros son equivalentes a %.2f Quetzales.\n", cantidad, cantidad * 8.60); // Tasa de cambio EUR -> GTQ
            printf("%.2f Euros son equivalentes a %.2f Dólares.\n", cantidad, cantidad * 1.06); // Tasa de cambio EUR -> USD
            break;
        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    int opcion;
    float cantidad;

    // Menú
    printf("Conversor de Monedas\n");
    printf("1. Convertir de Quetzales (GTQ) a Dólares (USD) y Euros (EUR)\n");
    printf("2. Convertir de Dólares (USD) a Quetzales (GTQ) y Euros (EUR)\n");
    printf("3. Convertir de Euros (EUR) a Quetzales (GTQ) y Dólares (USD)\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    // Llamar a la función de conversión
    convertirMoneda(cantidad, opcion);

    return 0;
}
