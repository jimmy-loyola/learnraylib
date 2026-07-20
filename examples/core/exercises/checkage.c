#include <stdio.h>
#include <stdlib.h>

void checkage(int age) {
    if (age < 18) {
        printf("minorenne\n");
    } else {
        printf("maggiorenne\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: ./programma eta\n");
        return 1;
    }

    int eta = atoi(argv[1]);
    checkage(eta);

    return 0;
}
