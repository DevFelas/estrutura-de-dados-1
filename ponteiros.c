// PONTEIRO: Variavél que recebe um endereço de memória
#include <stdio.h>

/*
int main(void) {
    int cont = 12, *m;

    m = &cont;
    printf("\n\nO valor de m eh: %p\n\n", m);
}
*/

/*
int main(void) {
    int num, valor;
    int *p;
    num=10;
    p = &num;
    valor = *p;
    printf("O conteúdo do endereço apontado por p é: %d\n", *p);
    printf("O endereço para onde o ponteiro p aponta é: %p\n", p);
    printf("O conteúdo do valor é: %d\n", valor);
    return 0;
}
*/

/*
int main(void) {
    float *p1, a = 2;
    p1 = &a;

    printf("O endereço de p1 é: %p",p1);
    p1=p1+20;
    printf("\nO novo endereço de p1 é: %p\n",p1);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
/* Este programa demonstra a varredura sequencial de uma matriz*/
int main(void) {
    char str[30], *p;
    p = str;
    printf("Este programa demonstra a varredura sequencial de uma matriz   com ponteiros");
    printf("\nDigite um nome: ");
    gets(str);
    printf("\nO nome digitado foi: ");
    while(*p)
    printf("%c",*p++);
    return 0;
}           
