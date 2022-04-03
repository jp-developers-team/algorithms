# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Calculando a média de notas de 5 provas de 5 alunos diferentes
# O usuário/professor informará a nota da primeira prova
# O usuário/professor informará também a nota da segunda prova
# O usuário/professor informará também a nota da terceira prova
# O usuário/professor informará também a nota da quarta prova
# E por fim o usuário/professor informará a nota da quinta prova
# Será apresentado o resultado da média obtida com base nas notas das 5 provas
# Objetivo é trabalhar estrutura condicional, [if, else if, else], além, do [while] que é uma estrutura contendo laço de repetição
# Trabalharemos também com aritmética básica de referência de média, ou seja
# Pegaremos a soma de 5 provas e dividiremos o resultado por 5, e logo saberemos a média de notas

# Atribuindo o valor default
option = "s"

# Laço de repetição, enquanto o usuário escolher "SIM", ocorrerá a repetição
while (option == "s"):

    # Estrutura condicional, se o usuário escolher "SIM", vai ser dado o início do programa
    if (option == "s"):

        # Tipando as variáveis para o tipo número decimal
        nota1 = float(input("Digite a nota da primeira prova, \nInsira um número decimal, \nNão use a vírgula [,] Use o ponto [.], ex.: 3.5\n"))
        nota2 = float(input("Digite a nota da segunda prova, \nInsira um número decimal, \nNão use a vírgula [,] Use o ponto [.], ex.: 3.5\n"))
        nota3 = float(input("Digite a nota da terceira prova, \nInsira um número decimal, \nNão use a vírgula [,] Use o ponto [.], ex.: 3.5\n"))
        nota4 = float(input("Digite a nota da quarta prova, \nInsira um número decimal, \nNão use a vírgula [,] Use o ponto [.], ex.: 3.5\n"))
        nota5 = float(input("Digite a nota da quinta prova, \nInsira um número decimal, \nNão use a vírgula [,] Use o ponto [.], ex.: 3.5\n"))

        result = (nota1+nota2+nota3+nota4+nota5)/5

        # Imprimindo na tela o resultado
        print('A primeira nota foi {}, \na segunda nota foi {}, \na terceira nota foi {}, \na quarta nota foi {}, \na quinta nota foi {}, \na média das notas da prova da turma é {}\n'.format(nota1, nota2, nota3, nota4, nota5, result))

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