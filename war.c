#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5

// Definição da struct
typedef struct {
    char nome[50];
    char corExercito[30];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[QTD_TERRITORIOS];

    printf("=== Cadastro Inicial dos Territorios ===\n\n");

    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);

        // Nome
        printf("  Nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove o \n

        // Cor do exercito
        printf("  Cor do exercito: ");
        fgets(territorios[i].corExercito, sizeof(territorios[i].corExercito), stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        // Tropas
        printf("  Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // consome o '\n' deixado pelo scanf

        printf("\n");
    }

    // Exibição organizada
    printf("\n=== Estado Atual do Mapa ===\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor do Exercito: %s\n", territorios[i].corExercito);
        printf("  Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
