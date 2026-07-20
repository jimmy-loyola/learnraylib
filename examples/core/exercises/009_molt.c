#include <stdio.h>
#include <stdlib.h>

int molt(int a, int b) {
    return a * b;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: ./programma numero1 numero2\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("%d\n", molt(num1, num2));

    return 0;
}
