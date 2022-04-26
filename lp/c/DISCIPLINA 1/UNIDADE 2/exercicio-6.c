/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Classe "automovel" representando o "model" modelo/entidade e seus atributos
*/

#include <stdio.h>

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
