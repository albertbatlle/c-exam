#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Per a la funció isdigit

void print_multiplication_table(int numero, int resultats[]) {
    printf("\n   La tabla de multiplicar del %d es:\n", numero);

    for (int i = 1; i <= 10; i++) {
        int producte = i * numero;
        if (producte % 2 != 0) {
            printf("\n   %d * %d = %d <Impar>", i, numero, producte);
        } else {
            printf("\n   %d * %d = %d <Par>", i, numero, producte);
        }
        resultats[i - 1] = producte; // Afegim el resultat a l'array
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Ús incorrecte del programa. Cal introduir un número enter.\n");
        return 1;
    }

    // Validem l'argument d'entrada per verificar que és un número vàlid
    char *arg = argv[1];
    while (*arg != '\0') {
        if (!isdigit(*arg)) {
            printf("Error\n", argv[1]);
            return 1;
        }
        arg++;
    }

    int numero = atoi(argv[1]); // Convertim l'argument a un enter
    int resultats[10]; // Array per emmagatzemar els resultats de la taula

    print_multiplication_table(numero, resultats);

    // Imprimim els resultats emmagatzemats a l'array
    printf("\nResultats emmagatzemats:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", resultats[i]);
    }
    printf("\n");

    return 0;
}
