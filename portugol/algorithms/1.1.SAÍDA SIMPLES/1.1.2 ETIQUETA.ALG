Algoritmo "Etiqueta"
   // Disciplina   : [Linguagem e Lógica de Programação]
   // Professor   : Helington Jose Procopio
   // Descrição   : Elabore um programa que, após limpar a tela, escreve seu nome completo na
   //             : primeira linha, seu endereço na segunda, e o CEP e telefone na terceira.
   // Autor(a)    : Helington Jose Procopio
   // Data atual  : 08/09/2021
Var
   // Seção de Declarações das variáveis
   option: caractere
Inicio
   // Imprimindo diretamente na tela os valores ou informações abaixo...
   escreval("Exercício proposto")
   escreval("")
   escreva("Elabore um programa que, após limpar a tela, escreve seu nome completo na primeira linha, seu endereço na segunda, e o CEP e telefone na terceira.")
   escreval("")
   escreval("")
   escreval("Vamos começar?")
   escreval("")
   escreval("Se desejar limpar a tela pressione S")
   escreval("Caso contrário pressione qualquer caractere!")
   escreval("")
   escreval("")
   
   // Atribuindo à variável "option" o valor "S" de "SIM"
   leia(option)

   // início da estrutura condicional
   // Verifica se o usuário escolheu "SIM" ara limpar a tela
   Se option = "s" entao
   
      //Limpando a tela
      limpatela

      escreva("Você escolheu limpar a tela!!!")
      escreval("")
      
   // Acaso ele tenha escolhido "NÃO", continua o código sem limpar a tela
   Senao
   
      escreval("")
      escreval("Você escolheu não limpar a tela!!!")
      escreval("")
      
   // Fim da estrutura condicional
   fimse

   escreval("")
   escreva("Helington Jose Procopio")
   escreval("")
   escreva("Rua das Acácias, 50, Nossa Senhora do Carmo")
   escreval("")
   escreva("CEP: 32015-690 | Telefone: (31) 97177-7357")
   escreval("")
   escreval("")
   
   // Pressionando "ESC" ou "ESCAPE" finaliza a janela do prompt de comando
   escreval("Pressisone ESC para SAIR")

Fimalgoritmo