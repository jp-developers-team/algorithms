#include<stdio.h>

// Trabalhando com class/Model/Entity
struct automovel{
    char modelo[20];
    int ano;
    float valor;
};

int main(){
    //Instanciando a class automovel como um novo modelo
    struct automovel dadosAutomovel;

    printf("\n Informe o modelo do automóvel: ");
    scanf("%s", &dadosAutomovel.modelo);

    printf("\n Informe o ano do automóvel: ");
    scanf("%d", &dadosAutomovel.ano);

    printf("\n Informe o valor do automóvel: ");
    scanf("%f", &dadosAutomovel.valor);

    printf("\n Dados atribuídos: ");
    printf("\n  Modelo do automóvel: %s", dadosAutomovel.modelo);
    printf("\n  Ano do automóvel: %d", dadosAutomovel.ano);
    printf("\n  Valor do automóvel: %.2f", dadosAutomovel.valor);
    printf("\n");

    return 0;
}