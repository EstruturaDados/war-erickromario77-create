// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO - NÍVEL NOVATO
// ============================================================================

// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.
#include <stdio.h> // funções de entrada/saída (printf, scanf, fgets, getchar)
#include <string.h> // funções de manipulação de strings (strcspn)

// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.
#define MAX_TERRITORIOS 5 // número máximo de territórios no jogo

// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.
struct territorio {
     char nome[30]; // Nome do território   
     char cor[10]; // Cor do exército
     int tropas; // Número de tropas
};

// --- Função para limpar o buffer de entrada ---
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // descarta até o fim da linha
}

// --- Função Principal (main) ---

int main() {
    struct territorio mapa[MAX_TERRITORIOS];//Vetor de territórios
    int totalterritorios = 0; // Contador de territórios cadastrados
    
    // Laço principal do Menu
    printf("==============================\n");
    printf("    JOGO WAR - NIVEL NOVATO   \n");
    printf("==============================\n");
 
    //Loop para cadastro dos territórios
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Cadastro do Territorio %d:\n", i + 1);

        printf("Nome do Territorio: ");
        fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // Remove o caractere de nova linha

        printf("Cor do Exercito: ");
        fgets(mapa[i].cor, sizeof(mapa[i].cor), stdin);
        mapa[i].cor[strcspn(mapa[i].cor, "\n")] = '\0'; // Remove o caractere de nova linha

        printf("Numero de Tropas: ");
        scanf("%d", &mapa[i].tropas);
        limparBuffer(); // Limpa o buffer após a leitura do número
    }
    // Exibe os territórios cadastrados
    printf("\nTerritorios Cadastrados:\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Territorio %d: %s, Cor: %s, Tropas: %d\n", i + 1, mapa[i].nome, mapa[i].cor, mapa[i].tropas);
    }
    return 0;// Fim do programa
}
