r = "S"

contador = 0

homem = 0
mulher = 0

home_mais_que_trinta = 0
mulher_menos_de_dezoito = 0

idade_mais_velha = 0
idade_mais_jovem = 999999999

while (r == "S"):

    nome = input("Informe o seu nome\n")
    idade = int(input("Informe a sua idade\n"))
    genero = input("Informe seu sexo? \nPressione [M] para MASCULINO Ou Pressione [F] para FEMININO\n").upper()
    
    contador = contador + 1
    
    if(genero == "M"):
        sexo = "MASCULINO"
        homem = homem + 1
        
        if(idade > 30):
            home_mais_que_trinta = home_mais_que_trinta + 1
    else:
        sexo = "FEMININO"
        mulher = mulher + 1
        
        if(idade < 18):
            mulher_menos_de_dezoito = mulher_menos_de_dezoito + 1
    
    if(idade > idade_mais_velha):                
        idade_mais_velha = idade
        nome_mais_velha = nome

    if(idade < idade_mais_jovem):
        idade_mais_jovem = idade
        nome_mais_jovem = nome                        
        
    media = str(round(idade/contador, 2))
    
    #Exibindo o resultado à cada repetição do "While"
    print('\nResultado pós repetição,\nTotal de homens: {}, \nTotal de mulheres: {}, \nO nome da pessoa mais velha é: {}, \nO nome da pessoa mais jovem é: {}, \nMédia de idade do grupo: {}, \nQuantidade de homens com mais de 30 anos {}, \nQuantidade de mulheres com menos de 18 anos {}'.format(homem, mulher, nome_mais_velha, nome_mais_jovem, media, home_mais_que_trinta, mulher_menos_de_dezoito))

    #Exibindo o resultado ou solicita o encerramento ao pressionar "n"
    r = input("Deseja continuar? \nPressione [s] para SIM Ou Pressione [n] para encerrar e exibir o resultado\n").upper()
    
#Exibindo o resultado ao pressionar "n" para encerrar
print('\nResultado pós encerramento, \nTotal de homens: {}, \nTotal de mulheres: {}, \nO nome da pessoa mais velha é: {}, \nO nome da pessoa mais jovem é: {}, \nMédia de idade do grupo: {}, \nQuantidade de homens com mais de 30 anos {}, \nQuantidade de mulheres com menos de 18 anos {}'.format(homem, mulher, nome_mais_velha, nome_mais_jovem, media, home_mais_que_trinta, mulher_menos_de_dezoito))
