#include <stdio.h>

/*
int fatorial(int n){
    if(n == 0)
        return 1;
    else if (n < 0) {
        printf("Erro: fatorial não pode ser negativo");
    }
    return n * fatorial(n - 1);
}

int main() {
    int num = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("O fatorial de %d eh %d", num, fatorial(num));
}
*/

// 1. Escreva uma função recurssiva para calcular o valor de uma base x elevada a um expoente y.

float potencia(float valor, float expoente){
    if (expoente == 0)
        return 1;
    else if (expoente < 0) {
        return (1/valor) * potencia(valor, expoente + 1);
    }
    return valor * potencia(valor, expoente - 1);
}

int main() {
    float num = 2, exp = -3;

    printf("%.3f", potencia(num, exp));
}

// 2. Escrever uma função recurssiva para retornar o tamanho de uma string



// 3. Fazer uma função recurssiva que conta o número de ocorrencias de um determinado caractere

// 4. Escreva uma funcao recurssiva que produza o reverso de uma string