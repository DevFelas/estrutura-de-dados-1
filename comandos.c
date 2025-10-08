#include <stdio.h>
#include <stdlib.h>

/* COMANDOS BÁSICOS */

// IF e ELSE

// Função principal. Inicia a execução do programa

// Exemplo 01: Aluno: Aprovado, Prova Final ou Reprovado.
/* int main(void) {
    int nota;
    printf("Digite sua nota");
    scanf("%d", &nota);
    if(nota>=7){
        printf("Aprovado");
    }
    else if(nota<7 && nota >=4){
        printf("Prova Final");
    }
    else {
        printf("Reprovado");
    }
    return 0; // indica que o programa terminou com sucesso
} */

// Exemplo 02: Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é Equilátero, Isósceles ou Escaleno. Sendo que: Triângulo Equilátero possui os 3 lados iguais; Triângulo Isóscele: possui 2 lados iguais. Triângulo Escaleno: possui 3 lados diferentes


/* int main() {
    int l1, l2, l3;

    printf("1° Lado: ");
    scanf("%d", &l1);

    printf("2° Lado: ");
    scanf("%d", &l2);

    printf("3° Lado: ");
    scanf("%d", &l3);

    if (l1 == l2 && l2 == l3) 
        printf("O triângulo é Equilátero");
    
    else if ((l1 == l2 && l1 != l3) || (l1 == l3 && l1 != l2) || (l3 == l2 && l3 != l1)) 
        printf("O triângulo é Isórceles");
    
    else 
        printf("O triangulo é Escaleno");
    
} 
*/

// Exemplo 3: Escreva um programa que leia três valores inteiros e informe qual o maior valor entre eles.

/*
int main() {
    int a, b, c;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    printf("Terceiro valor: ");
    scanf("%d", &c);

    if ( a >= b && a >= c) {
        printf("%d eh o maior valor!", a);
    }
    else if (b >= a && b >= c) {
        printf("%d eh o maior valor", b);
    }
    else {
        printf("%d eh o maior valor", c);
    }
}
*/

// SWITCH


// Um exemplo bem simples é apresentado a seguir sobre um programa que informa se a pessoa é mais adulto ou velho.

/*
int main() {
    char sn;

    printf("Voce tem mais de 70 anos? (s/n) ");
    scanf("%c", &sn);

    switch (sn)
    {
    case 's':
        printf("Voce esta velho!\n");
        break;
    case 'S':
        printf("Voce esta velho!\n");
        break;
    case 'n':
        printf("Voce eh adulto!\n");
        break;
    case 'N':
        printf("Voce eh adulto!\n");
        break;
    }
    return 0;
}
*/

/*
Exemplo 4: Escreva um programa em C que pede a idade da pessoa e deve informar se ela
é bebê, criança, adolescente, adulto ou idoso.
▪ 0 até 4 anos é bebê;
▪ 5 até 12 anos é criança;
▪ 13 até 21 anos é adolescente;
▪ 22 até 60 anos é adulto;
▪ Acima de 60 anos é idoso.
*/

/*
int main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    switch (idade) 
    {
    case :
        break;
    
    default:
        break;
    }
}
*/

// Exemplo 5: Calculadora: peça para o usuário digitar a operação que deseja fazer e depois dois números e forneça o resultado da operação. (Use switch)

/*
int main() {
    int v1, v2; char op; float result;
    printf("Informe a operacao (+,-,*,/): ");
    scanf("%c", &op);
    
    printf("Primeiro valor: ");
    scanf("%d", &v1);
    
    printf("Segundo valor: ");
    scanf("%d", &v2);
    
    switch (op)
    {
    case '+':
        result = v1 + v2;
        break;
    case '-':
        result = v1 - v2;
        break;
    case '*':
        result = v1 * v2;
        break;
    case '/':
        result = v1 / v2;
        break;
    default:
        printf("Operacao invalida!");
        break;
    }

    printf("%d %c %d = %.1f", v1, op, v2, result);

    return 0;
}

*/

// Exemplo 6: Desenvolva um programa para verificar o dia da semana a fim de exemplificar a utilização do switch…case. O usuário vai digitar um número de 1 a 7 e o programa vai retornar o dia da semana equivalente ao número.

/*
int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    switch (num) {
        case 1: printf("Domingo");break;
        case 2: printf("Segunda");break;
        case 3: printf("Terca");break;
        case 4: printf("Quarta");break;
        case 5: printf("Quinta");break;
        case 6: printf("Sexta");break;
        case 7: printf("Sabado");break;
        default: printf("Nenhum dia relacionado a esse numero."); break;
    }
}
*/

// FOR

/* 
for (atribuicao; comparacao; incrementacao/decrementacao) {
    codigo
}
*/

// Exemplo 7: Elaborar um programa que imprima os número de 1 a 10. 
/*
int main() {
    
    for (int i = 10; i >= 0; i++) {
        printf("\n%d", i);
    }

}
*/

// Exemplo 8: Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.
/*
int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("\n%d * %d = %d", num, i, num * i);
    }
}
*/

// Exemplo 9: Fazer um programa para encontrar todos os números pares entre 1 e 100.

/*
int main() {
    
    for (int i = 0; i <= 100; i += 2) {
        printf("\n%d", i);
    }

}

*/

// Exemplo 10: Ler 10 números e imprimir quantos são pares e quantos são ímpares.

/*
int main() {
    int pares = 0, impares = 0, num;

    for (int i = 0; i < 10; i++) {

        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares += 1;
        }
        else {
            impares += 1;
        }
    }

    printf("Quantidade de numeros pares: %d\nQuantidade de numeros impares: %d", pares, impares);
}

*/

// Exemplo 11: Leia várias idades e calcule a média entre as idades (usar uma variável para idade).


/*
int main() {
    int idade, i = 0;
    float media, soma = 0;
    
    for (i=0 ; i<5 ; i++) {

        printf("%d idade: ", i+1);
        scanf("%d", &idade);

        soma += idade;
    }

    media = soma / i;
    printf("A media dessas idades eh %.2f", media);

    return 0;
}
*/


// WHILE

// Exemplo 12: Mesmo programa do for, só que usando while na contagem de 1 até 10.

/*

int main() {

    int cont = 0;
    while (cont < 10)
    {
        printf("%d ", cont + 1);
        cont ++;
    }
    
}

*/

// DO/WHILE

/*
int main() {

    int cont = 0;

    do {
        printf("%d ", cont + 1);
        cont++;
    } while (cont < 10);
}
*/