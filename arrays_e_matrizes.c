#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

declaração:

    int vetor[5]; => declara um vetor de 5 posições
    int matriz[5][3]; => declara uma matriz de 5 linhas e 3 colunas

Acesso aos elementos do vetor

    vetor[0] = 4 => coloca 4 na primeira posição do "vetor"
    vetor[4] = 8 => coloca 8 na última posição do "vetor"
*/

/*
int main() {

    int i;
    float nota[3], m=0;

    for (i=0;i<3;i++) {
        printf("\nDigite a nota %d: ", i+1);
        scanf("%f", &nota[i]);
        m += nota[i];
    }

    m/=3;
    printf ("\nA media eh %.2f\n", m);
}
*/

// Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.

/*
int main() {
    int vetor[10], maior = 0, menor = 0, i;

    for (i=0;i<10;i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        
        if (i == 0) {
            menor = vetor[i];
            maior = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior: %d\nMenor: %d", maior, menor);
}
*/

// Ler um conjunto de números inteiros, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.

int main() {
    int valores[10], quadrados[10];
    
}

// Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem inversa.

// Faça um programa que lê duas palavras do teclado e diz se elas são iguais ou diferentes. O programa deve dizer ainda se alguma das palavras digitadas é igual a “IFPI”.

// Desenvolva um programa para ler uma string (palavra) de no máximo 100 caracteres e informe o número que cada vogal se repete nessa frase.
