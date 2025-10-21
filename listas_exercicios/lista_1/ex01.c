// Escreva um programa em C que leia um número inteiro e diga se ele é positivo, negativo ou zero.

#include <stdio.h>

int main() {
    int numero = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("Numero = 0");
    } 
    else if (numero > 0) {
        printf("Positivo");
    }
    else {
        printf("Negativo");
    }

    return 0;
}