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
Void limparBufferEntrada() {
	int c;
	while ((c = getchar()) !n ‘\n’ && c !=EOF); //descarta caracteres até nova linha ou EOF
}

// --- Função Principal (main) ---

int main() {
    struct territorio mapa[MAX_TERRITORIOS];//Vetor de territórios
    int totalterritorios = 0; // Contador de territórios cadastrados
    
    // Laço principal do Menu
    printf("==============================\n");
    printf("    JOGO WAR - NIVEL NOVATO   \n");
    printf("==============================\n");
 
    return 0;
}
