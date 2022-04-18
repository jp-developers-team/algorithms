#include <stdio.h>

//Classe "automovel" representando o "model" modelo/entidade e seus atributos
struct automovel{
    char modelo[20];
    int ano;
    float valor;
};

// Trabalhando com "struct" => "model/entidade"
int main(){
    // Instanciando uma nova classe/model/entidade "dadosAutomovel", herdando todos os atributos da classe principal "automoveis"
    struct automovel dadosAutomovel;
        
    //Exibindo informações para ao usuário
    printf("\n Digite o modelo do automóvel, ex.: Fusca: ");
    // Capturando o valor informado pelo usuário
    scanf("%s", &dadosAutomovel.modelo);

    //Exibindo informações para ao usuário
    printf("\n Digite o ano do automóvel, ex.: 1979: ");
    // Capturando o valor informado pelo usuário
    scanf("%d", &dadosAutomovel.ano);

    //Exibindo informações para ao usuário
    printf("\n Digite o valor do automóvel, ex.: 7800.00: ");
    // Capturando o valor informado pelo usuário
    scanf("%f", &dadosAutomovel.valor);

    printf("\n Dados atribuídos");
    printf("\n Modelo Automóvel: %s", dadosAutomovel.modelo);
    printf("\n Ano Automóvel: %d", dadosAutomovel.ano);
    printf("\n Valor Automóvel: %.2f", dadosAutomovel.valor);
    printf("\n");

    return 0;
}
