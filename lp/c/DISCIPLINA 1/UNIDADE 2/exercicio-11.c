/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Aplicando desconto de 10%, 20% ou 30%, porcento ao valor da sua compra
*/

#include<stdio.h>

int main(){
    char x;
    float valor, desconto, total;

    printf("\n Digite o valor da compra: ");
    scanf("%f", &valor);

    printf("\n Digite a letra que apresenta o valor de seu desconto, selecione uma das seguintes [CORES]: ");
    printf("\n r => VERMELHO: " );
    printf("\n g => VERDE: ");
    printf("\n b => AZUL: ");
    printf("\n Agora digite sua opção: ");
    scanf("%s", &x);

    switch(x){
        case 'r':
            printf("\n Você selecionou a cor VERMELHA, terá então o desconto é de 30 [TRINTA POR CENTO] \n");
            desconto = 30;
            break;

        case 'g':
            printf("\n Você selecionou a cor VERDE, teŕa então o desconto de 20 [VINTE POR CENTO] \n");
            desconto = 20;
            break;

        case 'b':
            printf("\n Você selecionou a cor BLUE, terá então o desconto de 10 [DEZ POR CENTO] \n");
            desconto = 10;
            break;

        default:
            printf("\n Você informou um valor invalido, tente novamente! \n");
            desconto = 0;
            break;
    }

    total = valor - (valor * desconto / 100);

    printf("\n O valor de sua compra foi de: R$%.2f", valor);
    printf("\n O desconto aplicado foi de: %.1f \%%", desconto);
    printf("\n O valor total à pagar é de : R$%.2f", total);
    printf("\n");

    return 0;
}