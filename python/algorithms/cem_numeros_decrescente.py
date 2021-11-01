# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Ordem decrescente
# O programa exibirá na tela uma ordem específica, de 100 até 0, ou seja descendentemente/regressivamente/descrescente
# Objetivo é trabalhar estrutura do [for] que é uma estrutura contendo laço de repetição

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número inteiro
        #number1 = int(input("Digite um número qualquer, \nInsira um número INTEIRO\n"))
        
        # Imprimindo na tela o resultado
        #print('O primeiro número {} é maior do que o segundo número {}!\n'.format(number1, number2))
        
        # Setando o valor default para o contador
        count = 0

        # A intereção será decrementada de [100], irá parar quando atingir [0], e será decrementado [1] à cada interação
        for i in range(100, 0, -1):

            # Contador de decremento
            count = count + 1

            # Imprimindo na tela o resultado
            print('Contagem regressiva! {}\n'.format(i))
        
        # Contagem total
        print('Contagem total de interações no loop! é {}\n'.format(count))

    # Fim da estrutura condicional, se o usuário escolher "NÃO", o programa será encerrado
    else:

        # Imprimindo na tela o resultado
        print('Você escolheu SAIR!\n')

    # Permite o usuário reiniciar automaticamente o LOOP, ou seja, o laço de repetição
    option = input("Deseja rodar o código novamente? \nPressione [s] para SIM \nOu \nPressione [n] para NÃO\n")

# Verifica se o usuário optou por sair, ao inserir um valor diferente de "s"
if (option != "s"):

    # Imprimindo na tela o resultado
    print('Você escolheu SAIR!\n')

    # Encerra o programa
    exit()