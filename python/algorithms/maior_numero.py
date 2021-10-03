# Algorítmo...
# Calculando qual é o maior número
# O usuário informará um rimeiro númeo inteirioo qualquer
# Logo após informará um segundo númeo inteirioo qualquer
# Será realizado uma comparação, entre os dois valores inseridos
# Será apresentado o resultado de qual dos números inseridos é maior
# Objetivo é trabalhar estrutura condicional, [if, else if, else], além, do [while] que é uma estrutura de repetição

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número inteiro
        number1 = int(input("Digite um número qualquer, \nInsira um número INTEIRO\n"))
        number2 = int(input("Digite outro número qualquer, \nInsira um número INTEIRO\n"))
        
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