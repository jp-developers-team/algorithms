# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Calculando a idade de um usuário
# O usuário informará o seu nome completo
# O usuário informará ainda a sua idade, e logo apóe, será calculado a idade, para verificarmos se o usuário tem a maioridade ou não
# Objetivo é calcular a idade de um determinado usuário, [if, else if e else], além, do [while] que é uma estrutura contendo laço de repetição

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo "string" e "integer number"
        name = input("Digite o seu nome completo\n")
        oldYear = int(input("Digite o valor corresondente a sua idade, \nInsira um número INTEIRO\n"))

        # Verifica se é menor de idade ou maior de idade
        if(oldYear > 0 and oldYear <= 17):

            # Exibe o resultado na tela
            print('Olá {} a sua idade é {}, portanto você é MENOR de idade!\n'.format((name), (oldYear)))

        else:

            # Exibe o resultado na tela
            print('Olá {} a sua idade é {}, portanto você tem a maioridade, ou seja você é MAIOR de idade!\n'.format((name), (oldYear)))

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