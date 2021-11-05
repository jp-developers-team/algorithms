# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# Algorítmo...
# Calculando as quatros operações, ou seja, ADIÇÃO, SUBTRAÇÃO, MULTIPLICAÇÃO e DIVISÃO
# O usuário pressisonará no primeiro númeo desejado
# Em seguida selecionará um dos operadores matemáticos [+, -, * e /]
# Então pressisonará no segundo númeo desejado
# Será apresentado o resultado, com base no operador matemático escolhido => [+, -, * e /]
# Objetivo é trabalhar estrutura condicional, [if, else if, else], interface do usuário [UI], usando a biblioteca TKinter
#
# Para saber masi sobre o TKinter, pesquise os códigos fontes prontos no site abaixo, como exercício para fins didático
# https://www.usandopy.com/search/label/tkinter?&max-results=5
#
# Video aula de onde tirei a ideia da tela#
# https://www.youtube.com/watch?v=O2ABVLUobyg
#
# Saber mais sobre o TKinter
# https://www.usandopy.com/python-tkinter-aula-01-introducao
#
# Criando a janela
# https://www.usandopy.com/python-tkinter-aula-02-criando-janela
#
# Implementando a label
# https://www.usandopy.com/python-tkinter-aula-03-como-criar-label
#
# Implementando o botão
# https://www.usandopy.com/python-tkinter-aula-04-como-criar-botao
#
# Implementando a caixa de text de entrada
# https://www.usandopy.com/python-tkinter-aula-06-como-criar-uma
#
# Implementando a mensagem de texto para o usuário
# https://www.usandopy.com/python-tkinter-aula-09-messagebox
#
from tkinter import *
from tkinter import messagebox

# Screen setting variable using library "tkinter"
screen = Tk()

# Title to screen
screen.title("jpdevelopersteam")

# Function to apply on clicked numbers => BUTTONS_NUMBES
def onClickNumbers(value):
    currentDisplay = display.get()
    display.delete(0, END)
    display.insert(END, str(currentDisplay) + str(value))

# Function to apply on clicked button ADD
def onClickAdd():
    getValue1 = display.get()

    global n1
    global math

    math = "+"
    n1 = float(getValue1)

    display.delete(0, END)

# Function to apply on clicked button SUB
def onClickSub():
    getValue1 = display.get()

    global n1
    global math

    math = "-"
    n1 = float(getValue1)

    display.delete(0, END)

# Function to apply on clicked button MULT
def onClickMult():
    getValue1 = display.get()

    global n1
    global math

    math = "*"
    n1 = float(getValue1)

    display.delete(0, END)

# Function to apply on clicked button DIV
def onClickDiv():
    getValue1 = display.get()

    global n1
    global math

    math = "/"
    n1 = float(getValue1)

    display.delete(0, END)

# Function to apply on clicked button dot/point/virg
def onClickDot():
    display.insert(END, ".")

# Function to apply on clicked button EQUAL
def onClickEqual():
    getValue2 = display.get()
    display.delete(0, END)

    # Se não houver valor selecionado, não há como exibir um resultado, então o usuário será notificado
    if getValue2 == "":
        messagebox.showwarning('Waring!', 'Voce precisa selecionar um número primeiro')

    if math == "+":
        display.insert(0, n1 + float(getValue2))
    elif math == "-":
        display.insert(0, n1 - float(getValue2))
    elif math == "*":
        display.insert(0, n1 * float(getValue2))
    else:
        display.insert(0, n1 / float(getValue2))

# Function to apply on clicked button CE => CLEAR
def onClickClear():
    display.delete(0, END)

# Exibindo uma mensagem ao usuário
def onClickNumLock():
    messagebox.showinfo('Waring!', 'Lamento, mas a funcionalidade [NUM LOCK] não está habilitada')

# Label my calculator
lbl = Label(screen, text="My Calculator", font=("verdana", 16, "bold"), pady="10", padx=10)
lbl.pack()

# Display
display = Entry(screen, bg="yellow")
display.pack()

# Buttons to numbers...
btn9 = Button(screen, text="9", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(9))
btn8 = Button(screen, text="8", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(8))
btn7 = Button(screen, text="7", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(7))
btn6 = Button(screen, text="6", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(6))
btn5 = Button(screen, text="5", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(5))
btn4 = Button(screen, text="4", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(4))
btn3 = Button(screen, text="3", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(3))
btn2 = Button(screen, text="2", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(2))
btn1 = Button(screen, text="1", bg="lightblue", pady="13", padx="14", bd="4", command=lambda: onClickNumbers(1))
btn0 = Button(screen, text="0", bg="lightblue", pady="13", padx="39", bd="4", command=lambda: onClickNumbers(0))

# Buttons to arithmetic  expressions
btnDot = Button(screen, text=".", bg="lightblue", pady="13", padx="16", bd="4", command=onClickDot)
btnAdd = Button(screen, text="+", bg="lightblue", pady="41", padx="13", bd="4", command=onClickAdd)
btnDiv = Button(screen, text="/", bg="lightblue", pady="16", padx="16", bd="4", command=onClickDiv)
btnMult = Button(screen, text="*", bg="lightblue", pady="16", padx="15", bd="4", command=onClickMult)
btnSub = Button(screen, text="-", bg="lightblue", pady="16", padx="16", bd="4", command=onClickSub)

# Button disabled function
btnNumLock = Button(screen, text="Num\nLock", bg="lightblue", pady="7", padx="3", bd="4", command=onClickNumLock)

# Buttons equal
btnEnter = Button(screen, text="ENT", bg="lightblue", pady="40", padx="6", bd="4", command=onClickEqual)
btnEqual = Button(screen, text="=", bg="lightblue", pady="13", padx="114", bd="4", command=onClickEqual)

# Buttons clear
btnCe = Button(screen, text="CE", bg="lightblue", pady="125", padx="11", bd="4", command=onClickClear)

# Row [Num Lock, /, *, -, CE]
btnCe.place(x=210, y=100)
btnSub.place(x=160, y=100)
btnMult.place(x=110, y=100)
btnDiv.place(x=60, y=100)
btnNumLock.place(x=10, y=100)

# Row [7, 8, 9, ADD, CE]
btnAdd.place(x=160, y=160)
btn9.place(x=110, y=160)
btn8.place(x=60, y=160)
btn7.place(x=10, y=160)

# Row [4, 5, 6, ADD, CE]
btn6.place(x=110, y=215)
btn5.place(x=60, y=215)
btn4.place(x=10, y=215)

# Row [1, 2, 3, ENTER, CE]
btnEnter.place(x=160, y=270)
btn3.place(x=110, y=270)
btn2.place(x=60, y=270)
btn1.place(x=10, y=270)

# Row [0, virg, ENTER, EQUAL]
btnDot.place(x=110, y=325)
btn0.place(x=10, y=325)
btnEqual.place(x=10, y=380)

# Resizing disabled
# Width = disabled
# Height = disabled
screen.resizable(False, False)

# Screen size
# Width = 270
# Height = 450
screen.geometry("270x450")

# Start app
screen.mainloop()
