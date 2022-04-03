# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Calculando qual é o maior número
# O usuário informará um primeiro númeo inteiro qualquer
# Logo após informará um segundo númeo inteiro qualquer
# Será realizado uma comparação, entre os dois valores inseridos pelo usuário
# Será apresentado o resultado de qual dos números inseridos pelo usuário é maior
# Objetivo é trabalhar estrutura condicional, [if, else if, else], além, do [while] que é uma estrutura contendo laço de repetição

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número decimal
        number1 = float(str(input("Digite um número qualquer, \nInsira um número DECIMAL\n").replace(",", ".")))
        number2 = float(str(input("Digite outro número qualquer, \nInsira um número DECIMAL\n").replace(",", ".")))
        
        # Verificamos se o primeiro número é maior do que o segundo número
        if (number1 > number2):

            # Imprimindo na tela o resultado
            print('O primeiro número {} é maior do que o segundo número {}!\n'.format(number1, number2))
        
        # Verificamos se o segundo número é menor do que o primeiro número
        elif (number1 < number2):

            # Imprimindo na tela o resultado
            print('O segundo número {} é maior do que o primeiro número {}!\n'.format(number2, number1))
            
        # Verificamos se o primeiro número é igual ao segundo número            
        else:

            # Imprimindo na tela o resultado
            print('O primeiro número {} e o segundo número {} são iguais!\n'.format(number1, number2))
                
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