# Algorítmo...
# Calculando o valor da área
# Depois calculando o valor do perímetro
# Será informado o valor do lado de um quadrado e logo após, será calculado o valor da área e o valor do perímetro
# Objetivo é calcular uma expressão muito usada no dia a dia de muitos profissionais, [Lado, Área e Perímetro], além, do [while] que é uma estrutura contendo laço de repetição
# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número inteiro
        lado = int(input("Digite o valor corresondente ao lado, \nInsira um número INTEIRO\n"))

        # Exibindo o resultado na tela
        print('O valor correspondente ao perímetro é {} e o valor corresondente a área é {}!\n'.format((lado*4), (lado*lado)))

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