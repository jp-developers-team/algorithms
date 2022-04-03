# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
from tkinter import *
from tkinter import messagebox

# Screen setting variable using library "tkinter"
screen = Tk()

# Title to screen
screen.title("jpdevelopersteam")
screen['bg'] = ('lightblue')


# Icon to screen
# screen.iconbitmap('/home/hell/Documentos/projects/python/bot-instagram-python/assets/images/icons/img.ico')
# screen.iconbitmap('@img.ico')
# screen.iconbitmap('/home/hell/Documentos/projects/python/bot-instagram-python/assets/images/icons/img.png')
# screen.iconphoto('img.png')
#
#cursor="dot"
#relief="groove"
#command=clear
#padx="10"
#pady="10"
#
# Function to apply on clicked button EQUAL
def start():
    messagebox.showinfo('Info!', 'Starting await...')


# Function to apply on clicked button EQUAL
def end():
    messagebox.showinfo('Info!', 'Stopping await...')


# Function to apply on clicked button CE => CLEAR
def clear():
    display.delete(0, END)


# Label my scripts
labelTitle = Label(screen, text="Instagram Bot", bg="lightblue", height=2, width=40, font=("verdana", 16, "bold"))
labelTitle.pack()

# Label select options
labelScriptOption = Label(screen, text="Select a option", fg="green", bg="lightblue", height=2, width=13, font=("verdana", 8, "bold"))
labelScriptOption.pack()

# Display
display = Entry(screen, bg="yellow")
display.pack()

# Button start
btnClear = Button(screen, text="X", bg="lightblue", height=1, width=1, command=clear)
btnClear.place(x=220, y=132)

# Button start
btnStart = Button(screen, text="START", bg="lightblue", height=2, width=10, command=start)
btnStart.place(x=20, y=380)

# Button end
btnEnd = Button(screen, text="END", bg="lightblue", height=2, width=10, command=end)
btnEnd.place(x=140, y=380)

# Resizing disabled
# Width = disabled
# Height = disabled
screen.resizable(False, False)

# Screen size
# Width = 270
# Height = 450
# Padding-left = 600
# Padding-top = 200
screen.geometry("270x450+600+200")

# Start app
screen.mainloop()
