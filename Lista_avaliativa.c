#include <stdio.h>

/*
1. Dobro real
Escreva uma função void dobraValor(int *n) que dobre o valor da variável passada como
argumento. No main, peça ao usuário um número, chame a função e exiba o valor
original e o dobrado.
*/

/*
void dobraValor(int *n) {
    *n = *n * 2; 
}

int main() {
    
    int num;
    int *pont;

    printf("Digite um numero: ");
    scanf("%d", &num);

    pont = &num;

    printf("O dobro de %d", num);

    dobraValor(pont);

    printf(" eh %d\n", num);

    return 0;
}
*/

/*
2. Troca de valores
Implemente uma função void troca(int *a, int *b) que troque os valores de duas variáveis.
Teste com x = 10 e y = 20, imprimindo o resultado final.
*/


/*
void troca (int *a, int *b) {
    int aux; 

    aux = *a; 
    *a = *b; 
    *b = aux;
}

int main() {
    
    int x = 10, y = 20; 
    
    int *px, *py; 

    px = &x;
    py = &y;

    printf("x = %d, y = %d\n", x, y);

    troca(px, py);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
*/


/*
3. Maior e menor
Crie uma função void maiorMenor(int *v, int n, int *maior, int *menor) que encontre o
maior e o menor número de um vetor de inteiros. Use um vetor com 10 números
digitados pelo usuário.
*/


/*
void maiorMenor(int *v, int n, int *maior, int *menor) {

    *maior = v[0]; 
    *menor = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > *maior) {
            *maior = v[i];
        }
            
        if (v[i] < *menor) {
            *menor = v[i];
        }
    }
}


int main() {

    int vetor[10], maior, menor;

    printf("Digite 10 numeros inteiros:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maiorMenor(vetor, 10, &maior, &menor);

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
*/


/*
4. Contar pares recursivamente
Implemente uma função recursiva int contaPares(int *v, int n) que retorne quantos
números pares existem em um vetor.
*/

/*
int contarPares(int *v, int n) {

    if (n <= 0) {
        return 0;
    }

    if (v[0] % 2 == 0) {
        return 1 + contarPares(v + 1, n - 1);
    } else {
        return contarPares(v + 1, n - 1);
    }

}

int main() {

    int vetor[] = {1, 2, 3, 4};
    int tamanho = 4;

    int num_pares = contarPares(vetor, tamanho);

    printf("No vetor {1, 2, 3, 4}, o numero de pares eh: %d\n", num_pares);

    return 0;
}
*/


/*
5. Reodernar
Faça um programa em C que leia três números inteiros e os reordene de forma que o
maior fique na primeira variável, o médio na segunda e o menor na terceira.
A reorganização deve ser feita dentro de uma função chamada ordenarTres(), utilizando
apenas ponteiros (sem usar vetores, laços ou bibliotecas de ordenação).
*/


/*
void ordenarTres(int *valor1, int *valor2, int *valor3) {

    int aux = 0;

    if (*valor2 >= *valor1 && *valor2 >= *valor3) {
       
        aux = *valor1;
        *valor1 = *valor2;

        if (aux <= *valor3) {

            *valor2 = *valor3;
            *valor3 = aux;

        } else {

            *valor2 = aux;

        }

    } 
    else if (*valor3 >= *valor1 && *valor3 >= *valor2) {

        aux = *valor1;
        *valor1 = *valor3;

        if (aux >= *valor2) {

            *valor3 = *valor2;
            *valor2 = aux;
        } else {
            
            *valor3 = aux;
        }
    } else {
        
        if (*valor3 >= *valor2) {
            
            aux = *valor2;
            *valor2 = *valor3;
            *valor3 = aux;
        }
        
    }
}

int main() {

    int a = 2, b = 3, c = 1; 

    int *pa = &a, *pb = &b, *pc = &c; 

    printf("Valores ANTES da ordenacao:\n");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    ordenarTres(pa, pb, pc); 

    printf("\nValores DEPOIS da ordenacao (Decrescente):\n");

    printf("a = %d\nb = %d\nc = %d", a, b, c);

    return 0;
}
*/


/*
6. Fibonacci com ponteiro
Crie uma função void fibonacci(int n, int *resultado) que, de forma recursiva, calcule o nésimo termo da série de Fibonacci e armazene o valor em *resultado.
*/

/*
void fibonacci(int n, int *resultado) {
    
    if (n <= 0) {
        *resultado = 0;
    }
    
    else if (n == 1) {
        *resultado = 1;
    }
    
    else {
        int valor_n_1, valor_n_2;

        fibonacci(n - 1, &valor_n_1);
        
        fibonacci(n - 2, &valor_n_2);

        *resultado = valor_n_1 + valor_n_2;
    }
}

int main() {

    int resultado = 0, n = 0;
    int *presult;

    presult = &resultado;

    printf("Qual termo da sequencia de fibonacci deseja saber? ");
    scanf("%d", &n);

    fibonacci(n, presult);

    printf("O %d termo da sequencia eh: %d\n", n, resultado);

    return 0;
}
*/


/*
7. Estatísticas do vetor
Faça um programa que leia N números inteiros e utilize funções para: calcular a soma, a
média e os extremos (maior e menor valor). Use passagem por referência nos parâmetros.
*/


/*
void soma_valores(int v[], int n, int *soma) {

    for (int i = 0 ; i < n ; i++) {
        *soma += v[i];
    }

}


void media_valores(int v[], int n, float *media) {
    float soma = 0;

    for (int i = 0 ; i < n ; i++) {
        soma += v[i];
    }

    *media = soma / n;
}

void extremos_valores(int v[], int n, int *maior, int *menor) {
    
    *maior = v[0]; 
    *menor = v[0]; 

    for ( int i = 0 ; i < n ; i++) {

        if (v[i] >= *maior) {
            *maior = v[i]; 
        }

        if (v[i] <= *menor) {
            *menor = v[i];
        }
    }
}

int main() {

    int n;

    printf("Quantos valores deseja digitar? ");
    scanf("%d", &n);

    int valores[n]; 
    for (int i = 0 ; i < n ; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int soma = 0, maior = 0, menor = 0; 
    float media = 0;

    soma_valores(valores, n, &soma);
    media_valores(valores, n, &media);
    extremos_valores(valores, n, &maior, &menor);

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", soma);
    printf("Media: %.1f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
*/

/*
8. Ordenação com ponteiros
Implemente o algoritmo Bubble Sort usando ponteiros em vez de índices. Protótipo: void
bubbleSort(int *v, int n).
*/

/*
void bubbleSort(int *v, int n) {
    
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - 1 - i; j++) {

            int *a = v + j; 
            
            int *b = v + j + 1;

            if (*a > *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
            }
        }
    }
}

int main() {

    int vetor[6] = {5, 2, 3, 7, 4, 1};
    int *p = vetor;

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor ANTES da ordenacao: \n");
    for ( int i = 0 ; i < tamanho ; i++ ) {
        printf("[%d]", vetor[i]);
    }

    bubbleSort(p, tamanho);

    printf("\nVetor DEPOIS da ordenacao: \n");

    for ( int i = 0 ; i < tamanho ; i++ ) {
        printf("[%d]", vetor[i]);
    }

    printf("\n");
    return 0;
}
*/


/*
9. Soma de dígitos recursiva
Crie uma função int somaDigitos(int n) que retorne a soma dos dígitos de um número.
Exemplo: somaDigitos(1234) → 10.
*/

/*
int somaDigitos(int i) {

    if ( i < 10 ) {
        return i;
    }

    else {
        return i % 10 + somaDigitos(i / 10);
    }
}

int main() {

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("A soma dos digitos de %d eh %d\n", valor ,somaDigitos(valor));

    return 0;
}
*/



/*
10. Faça um programa em C que dado uma matriz de inteiros, calcule o produto entre a
matriz original e sua matriz transposta. O programa deve implementar a função que
monte a matriz transposta e a função que calcula o produto, além das funções para ler e
imprimir uma matriz.
Obs. 1: Deve ser permitido ao usuário definir a ordem da matriz original, desde que não
ultrapasse o máximo definido no programa.
Obs. 2: As funções imprime, transposta e produto devem ser recursivas.
Obs. 3: Deve existir uma única função imprime, deve ser possível imprimir qualquer
matriz de inteiros utilizando esta função.
*/


void imprimeMatriz(int lin, int col, int matriz[lin][col], int c, int l) {

    if (c == lin) {
        return;
    }

    if (l == col) {
        printf("\n");
        imprimeMatriz(lin, col, matriz, c + 1, 0);
        return;
    }

    printf("[%d]", matriz[c][l]);

    imprimeMatriz(lin, col, matriz, c, l + 1); 
}


void matrizTransposta(int lin, int col, int matriz[lin][col], int matrizT[col][lin], int i, int j) {

    if (lin == i) {
        return;
    }

    if (col == j) { 
        matrizTransposta(lin, col, matriz, matrizT, i + 1, 0);
        return;
    }

    matrizT[j][i] = matriz[i][j];

    matrizTransposta(lin, col, matriz, matrizT, i, j + 1);
}


void matrizResultante(int linA, int colA, int colB, int matriz[linA][colA], int matrizT[colA][colB], int matrizResult[linA][colB], int i, int j, int k) {

    if (linA == i) {
        return;
    }

    if (colB == j) {
        matrizResultante(linA, colA, colB, matriz, matrizT, matrizResult, i + 1, 0, 0);
        return;

    }
    else if (colA == k) {
        matrizResultante(linA, colA, colB, matriz, matrizT, matrizResult, i, j + 1, 0);
        return;

    }
    else {
        matrizResult[i][j] += matriz[i][k] * matrizT[k][j];
        
        matrizResultante(linA, colA, colB, matriz, matrizT, matrizResult, i, j, k + 1);

    }
    
}


int main() {

    int lin = 0, col = 0;
    printf("Informe a ordem da matriz (linha coluna): "); 
    scanf("%d %d", &lin, &col);

    int matriz[lin][col]; 
    int matrizT[col][lin];

    int resultMatriz[lin][lin];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < lin; j++) {
            resultMatriz[i][j] = 0;
        }
    }

    for (int i = 0; i < lin ; i++) {
        for ( int j = 0 ; j < col ; j++ ) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            int valor = 0;
            scanf("%d", &valor);

            matriz[i][j] = valor;
        } 
    }


    printf("\nMatriz Original (%d x %d)\n", lin, col);
    imprimeMatriz(lin, col, matriz, 0, 0);

    matrizTransposta(lin, col, matriz, matrizT, 0, 0);

    printf("\nMatriz Transposta (%d x %d)\n", col, lin);

    imprimeMatriz(col, lin, matrizT, 0, 0);

    matrizResultante(lin, col, lin, matriz, matrizT, resultMatriz, 0, 0, 0);

    printf("\nProduto das Duas Matrizes (A x A^T) (%d x %d)\n", lin, lin);
    imprimeMatriz(lin, lin, resultMatriz, 0, 0);

    return 0;
}


/*
11. Faça um programa em C que tenha um menu de opções com as seguintes opções:
para ler uma matriz de strings; um opção para ordenar cada uma das linhas da matriz,
lembre-se que o usuário pode entrar com letras maiúsculas e minúsculas e que as mesmas
não podem ser alteradas para o usuário; outra para mostrar cada linha da matriz antes de
ordenar e outra depois de ordenar; um opção que dado uma linha e uma coluna, conte o
número de vogais e de letras maiúsculas; outra que dado uma coluna conte o número de
strings dessa coluna que iniciam com consoante.
Obs.: Para a ordenação use o quicksort.
*/

