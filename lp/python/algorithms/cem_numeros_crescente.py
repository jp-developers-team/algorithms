# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Ordem crescente
# O programa exibirá na tela uma ordem específica, de 0 até 100, ou seja ascendentemente/progressivamente/crescente
# Objetivo é trabalhar estrutura do [for] que é uma estrutura contendo laço de repetição

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):
                
        # Setando o valor default para o contador
        count = 0

        # A intereção será incrementada de [0], irá parar quando atingir [100], e será incrementado [1] à cada interação
        for i in range(0, 100, 1):

            # Contador de incremento
            count = count + 1

            # Imprimindo na tela o resultado
            print('Contagem progressiva! {}\n'.format(i))
        
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