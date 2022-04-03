# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Calculando o fatorial de um valor fornecido pelo usuário
# Será informado o valor fatorial
# Objetivo é calcular uma expressão muito usada no dia a dia de muitos profissionais, [fatorial], além, do [while] que é uma estrutura contendo laço de repetição

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número inteiro
        n = int(input("Digite um valor qualquer, \nInsira um número INTEIRO\n"))

         # Setando o valor default para o resultado e contador
        result = 1
        count = 1

        # Exibindo o resultado na tela
        print('O fatorial correspondente de {} é\n'.format(n))

        # Enquanto [count] for menor ou igual ao valor [n] inserido pelo usuário
        while (count <= n):

            # result = result * count
            result *= count

            # coutn = count + 1
            count += 1
        
            # Exibindo o resultado na tela
            print('{}\n'.format(result))

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