Algoritmo "Etiqueta"
   // Disciplina   : [Linguagem e L�gica de Programa��o]
   // Professor   : Helington Jose Procopio
   // Descri��o   : Elabore um programa que, ap�s limpar a tela, escreve seu nome completo na
   //             : primeira linha, seu endere�o na segunda, e o CEP e telefone na terceira.
   // Autor(a)    : Helington Jose Procopio
   // Data atual  : 08/09/2021
Var
   // Se��o de Declara��es das vari�veis
   option: caractere
Inicio
   // Imprimindo diretamente na tela os valores ou informa��es abaixo...
   escreval("Exerc�cio proposto")
   escreval("")
   escreva("Elabore um programa que, ap�s limpar a tela, escreve seu nome completo na primeira linha, seu endere�o na segunda, e o CEP e telefone na terceira.")
   escreval("")
   escreval("")
   escreval("Vamos come�ar?")
   escreval("")
   escreval("Se desejar limpar a tela pressione S")
   escreval("Caso contr�rio pressione qualquer caractere!")
   escreval("")
   escreval("")
   
   // Atribuindo � vari�vel "option" o valor "S" de "SIM"
   leia(option)

   // in�cio da estrutura condicional
   // Verifica se o usu�rio escolheu "SIM" ara limpar a tela
   Se option = "s" entao
   
      //Limpando a tela
      limpatela

      escreva("Voc� escolheu limpar a tela!!!")
      escreval("")
      
   // Acaso ele tenha escolhido "N�O", continua o c�digo sem limpar a tela
   Senao
   
      escreval("")
      escreval("Voc� escolheu n�o limpar a tela!!!")
      escreval("")
      
   // Fim da estrutura condicional
   fimse

   escreval("")
   escreva("Helington Jose Procopio")
   escreval("")
   escreva("Rua das Ac�cias, 50, Nossa Senhora do Carmo")
   escreval("")
   escreva("CEP: 32015-690 | Telefone: (31) 97177-7357")
   escreval("")
   escreval("")
   
   // Pressionando "ESC" ou "ESCAPE" finaliza a janela do prompt de comando
   escreval("Pressisone ESC para SAIR")

Fimalgoritmo