/*Programa para determinar cuánto debe cobrar un municipio por el paso de los automotores por su nuevo puente
según el tipo de automotor.
Autores: Leana Cruz, Priscila Selva, Jeyni Orozco, Claudia Vargas
Versión: Inicial
Fecha: 29/04/2024*/

#include <stdio.h>
#include<iostream>

int main() {
    // Declaración de variable 
    int automotor;
    
    // Mensaje de bienvenida y opciones para el usuario
    printf("Bienvenido al sistema de peaje del puente municipal\n");
    printf("1. Vehiculo particular\n");
    printf("2. Autobus\n");
    printf("3. Microbus\n");
    printf("4. Motocicleta\n");
    printf("5. Moto Taxi\n");
    printf("6. Otros\n");
    printf("Ingrese la opcion segun su tipo de vehiculo: ");
    
    // Lectura del tipo de automotor ingresado por el usuario
    scanf("%d", &automotor);

    // Uso de estructura switch para determinar el peaje según el número ingresado
    switch(automotor) {
        case 1:
            printf("Pagara un peaje de: $0.75\n");
            break;
        case 2:
            printf("Pagara un peaje de: $1.50\n");
            break;
        case 3:
            printf("Pagara un peaje de: $1.25\n");
            break;
        case 4:
            printf("Pagara un peaje de: $0.25\n");
            break;
        case 5:
            printf("Pagara un peaje de: $0.50\n");
            break;
        case 6:
            printf("Pagara un peaje de: $3.00\n");
            break;
        default:
            printf("Opcion no valida\n");
    }
   
    return 0;
}
