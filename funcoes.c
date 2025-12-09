#include <stdio.h>

/*
void chamada_da_funcao() {
    printf("Ola, Mundo");
}


int main(){
    chamada_da_funcao();
    return 0;
}
*/

/*
float IMC(float peso, float altura) {
    return peso/(altura*peso);
}

int main() {
    float peso, altura, imc;

    printf("Peso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);

    imc = IMC(peso, altura);
    printf("O valor do IMC eh %f", imc);

    return 0;
}
*/

void troca(int *px,int *py) {
    int pz;
    pz = *px;
    *px = *py;
    *py = pz;

}

int main() {
    int x, y;

    x = 2;
    y = 5;

    printf("x = %d, y = %d\n", x, y);

    troca(&x, &y);

    printf("x = %d, y = %d", x, y);

    return 0;
}