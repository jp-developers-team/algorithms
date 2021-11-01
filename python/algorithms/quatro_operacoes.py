# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Calculando as quatros operações, ou seja, ADIÇÃO, SUBTRAÇÃO, MULTIPLICAÇÃO e DIVISÃO
# O usuário informará um primeiro númeo inteirioo qualquer
# O usuário informará um segundo númeo inteirioo qualquer
# Logo após informará um operador matemático, podendo ser um dos quatros da lista [+, -, * e /]
# Será realizado uma comparação, entre os dois valores inseridos, para sabermos qual é o maior
# Evitando que o resultado seja um valor negativo, se for inverteremos os números de forma que não dê um resultado negativo
# Será apresentado o resultado, com base no operador matemático escolhido => [+, -, * e /]
# Objetivo é trabalhar estrutura condicional, [if, else if, else], além, do [while] que é uma estrutura contendo laço de repetição

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número inteiro
        number1 = int(input("Digite o primeiro número, \nInsira um número INTEIRO\n"))
        number2 = int(input("Digite o segundo número, \nInsira um número INTEIRO\n"))

        #while not (number1 := input("Digite o primeiro número, \nInsira um número INTEIRO\n")).isdigit():
            #print("Você inseriu um valor inválido...\n")

        #while not (number2 := input("Digite o segundo número, \nInsira um número INTEIRO\n")).isdigit():
            #print("Você inseriu um valor inválido...\n")

        # Atribuindo à variável "operators" os operadores matemáticos de ADIÇÃO, SUBTRAÇÃO, MULTIPLICAÇÃO e DIVISÃO
        operators = input("Escolha um dos quatros operadores matemáticos a seguir: \nADIÇÃO = [+], \nSUBTRAÇÃO = [-], \nMULTIPLICAÇÃO = [*], \nDIVISÃO = [/]\n")

        while (operators != "+" and operators != "-" and operators != "*" and operators != "/"):

            # Informando o usuário que ele inseriu um operador inválido e apresentando a ele os números que ele informou para ser calculado
            print('Você inseriu um operador matemático inválido...\nO Primeiro número inserido foi {} \nO Segundo número inserido foi {}\n'.format(number1, number2))

            # Atribuindo à variável "operators" os operadores matemáticos de ADIÇÃO, SUBTRAÇÃO, MULTIPLICAÇÃO e DIVISÃO
            operators = input("Escolha um dos quatros operadores matemáticos a seguir: \nADIÇÃO = [+], \nSUBTRAÇÃO = [-], \nMULTIPLICAÇÃO = [*], \nDIVISÃO = [/]\n")

        # Se o usuário escolher o operador matemátivo ADIÇÃO
        if (operators == "+"):

            result = (number1 + number2)

            # Imprimindo na tela o resultado
            print('A SOMA entre {} e {} é = {}\n'.format(number1, number2, result))

        # Se o usuário escolher o operador matemátivo SUBTRAÇÃO
        elif (operators == "-"):

            # Verificamos se o primeiro número é menor do que o segundo número
            if (number1 < number2):

                # Se o primeiro número for MENOR, invertemos os número para não dar resultado NEGATIVO
                result = (number2 - number1)

                # Aqui pederíamos fazer assim
                # result = ((number1 - number2)*-1)
            else:

                # Se o primeiro número for MAIOR, fazemos a subtração normalmente
                result = (number1 - number2)

            # Imprimindo na tela o resultado
            print('A SUBTRAÇÃO entre {} e {} é = {}\n'.format(number1, number2, result))

        # Se o usuário escolher o operador matemátivo MULTIPLICAÇÃO
        elif (operators == "*"):

            result = (number1 * number2)

            # Imprimindo na tela o resultado
            print('A MULTIPLICAÇÃO entre {} e {} é = {}\n'.format(number1, number2, result))

        # Se o usuário escolher o operador matemátivo DIVISÃO
        elif (operators == "/"):

            result = (number1 / number2)

            # Imprimindo na tela o resultado
            print('A DIVISÃO entre {} e {} é = {}\n'.format(number1, number2, result))

        # Se o usuário inserir um valor diferente de ADIÇÃO, SUBTRAÇÃO, MULTIPLICAÇÃO e DIVISÃO
        else:

            # Imprimindo na tela o resultado
            print('O operador matemático inserido é inválido, por favor tente novamente!\n')

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