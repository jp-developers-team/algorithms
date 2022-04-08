#include<stdio.h>

#define TAM_NOME_CLIENTE 100

// Verificar idade apropriada para locação de filmes

// Classe/modelo/entidade
struct cliente {
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

// Classe/modelo/entidade
struct filme {
    int classificacao_indicativa;
    int esta_disponivel;
};

// Método principal
int main(){
    // Aplicando alias/apelido às nossas Classes/modelos/entidades
    struct cliente cli;
    struct filme fil;

    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin);

    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade);

    printf("\n Informe a classificação indicativa do filme: ");
    scanf("%d", &fil.classificacao_indicativa);

    printf("\n Digite [1] => se está disponível ou [0] => se não está disponível: ");
    scanf("%d", &fil.esta_disponivel);

    printf("\n Nome Nome cliente: %s", cli.nome);
    printf("\n Idade cliente: %d", cli.idade);    
    printf("\n");

    printf("\n Classificação indicativa do filme: % d", fil.classificacao_indicativa);
    printf("\n");

    printf("\n Filme pode ser locado pelo cliente: %d", (fil.esta_disponivel) && (cli.idade >= fil.classificacao_indicativa));
    printf("\n Anos restantes: %d", (cli.idade < fil.classificacao_indicativa) * (fil.classificacao_indicativa - cli.idade));
    printf("\n");

    return 0;
}