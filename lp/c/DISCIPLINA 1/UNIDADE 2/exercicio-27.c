/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com class/Model/Entity
*/

#include<stdio.h>

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