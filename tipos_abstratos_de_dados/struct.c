#include <stdio.h>
#include <string.h>

struct paciente {
    char nome[20];
    int idade;
    float altura, peso;
    struct paciente *proximo;
};

typedef struct paciente Paciente;

void imprimePaciente(Paciente pac) {
    printf("Dados pessoais:");
    printf("\nNome: %s\nIdade: %d\nAltura: %.1f\nPeso: %.1f", pac.nome, pac.idade, pac.altura, pac.peso);
}

Paciente criaPaciente() {
    Paciente p;

    printf("Nome: ");
    scanf("%s", &p.nome);

    printf("Idade: ");
    scanf("%d", &p.idade);

    printf("Altura: ");
    scanf("%f", &p.altura);

    printf("Peso: ");
    scanf("%f", &p.peso);

    return p;  
}

int main() {
    Paciente p;

    p = criaPaciente();
    imprimePaciente(p);
}

