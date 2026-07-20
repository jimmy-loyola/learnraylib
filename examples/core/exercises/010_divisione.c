#include <stdio.h>
#include <stdlib.h>

float divisione(int a, int b) {
    return (float)a / b;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: ./programma numero1 numero2\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num2 == 0) {
        printf("Errore: Impossibile dividere per zero.\n");
        return 1;
    }

    printf("%f\n", divisione(num1, num2));

    return 0;
}
