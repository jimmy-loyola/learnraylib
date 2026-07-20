#include <stdio.h>

char membyte[50];

char* saluta(char* nome) {
  sprintf(membyte, "Ciao amico so come ti chiami %s", nome);
  return membyte;
}

int main(int argc, char *argv[]) {
  printf("valore di argc: %d\n", argc);
  printf("valore di argv 0: %s\n", argv[0]);
  printf("valore di argv 1 %s\n", argv[1]);
  char* testo_di_saluto = saluta(argv[1]);
  printf("%s\n", testo_di_saluto);
  return 0;
}
