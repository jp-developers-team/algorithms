# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número inteiro
        number1 = int(input("Digite o primeiro número, \nInsira um número INTEIRO\n"))
        number2 = int(input("Digite o segundo número, \nInsira um número INTEIRO\n"))
        
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

                # Aqui pederíamos fazer assim

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
            print('O perador matemático inserido é inválido, por favor tente novamente!\n')
    # Fim da estrutura condicional, se o usuário escolher "NÃO", o programa será encerrado
    else:
        # Imprimindo na tela o resultado
        print('Você escolheu SAIR!\n')

    # Permite o usuário reiniciar automaticamente o LOOP, ou seja, o laço de repetição
    option = input("Deseja realizar um novo cálculo? \nPressione [s] para SIM \nOu \nPressione [n] para NÃO\n")