# -*- coding:utf-8 -*-
# PYTHON 3 ONLY
#
# mhyt is a Python library for download movies and music from youtube
# mhyt can run in python 3+
#
# Instalar dependências
#
# LINUX => sudo pip install mhyt
# Ou
# WINDOWS => pip install mhyt
#
# MessageBox Exemples
# https://www.delftstack.com/pt/tutorial/tkinter-tutorial/tkinter-message-box/
#
# Tutorial oficial, mhyt
# https://pypi.org/project/mhyt/
#
# Vídeos curtos e engraçados 18 => Pra testar o download
# https://www.youtube.com/watch?v=hsZVlDQEwnI
#

# Import native dependency "tkinter" and libraries of tertiary "mhyt" => "yt_download"
from tkinter import *
from mhyt import yt_download
from tkinter import messagebox

# Setting variable using library "tkinter"
root = Tk()

# Main Class
class main:

    # Function to close screen_initial
    def logout(self):
        root.quit()

    # Function to apply on clicked button "LIMPAR" search movies
    def clear_movie_search(self):
        self.url_movie_search.delete(0, END)

    # Function to apply on clicked button "LIMPAR" search audios
    def clear_audio_search(self):
        self.url_audio_search.delete(0, END)

    # Function to close screen ytd_movies
    def destroy_ytd_movies(self):
        self.ytd_movies.destroy()

    # Function to apply on clicked button [start="INICIAR DOWNLOAD DO VÍDEO"]
    def start_movie_download(self):

        # Configuration screen to top level
        self.ytd_movies = Toplevel()
        self.ytd_movies.attributes("-topmost", 0)

        # Verify if "url_movie_search" is not empty or is TRUE
        if self.url_movie_search.get():

            # Setting value to "label_information_movies"
            self.label_information_movies['text'] = "Processando, aguarde..."

            # Setting default "mhyt"
            url = self.url_movie_search.get()
            file = url + '.mp4'
            yt_download(url, file)

            # Message to proccess download information
            if yt_download:
                self.label_information_movies['text'] = " "
                messagebox.showinfo('Info!', 'Download concluído!')
            else:
                messagebox.showinfo('Info!', 'Não foi possível fazer o download...')
        else:
            messagebox.showinfo('Info!', 'Insira a URL do vídeo para prosseguir. \n\nOu você inseriu uma URL inválida. \n\nTente novamente, Ex.: \n\nhttps://www.youtube.com/watch?v=0BVqFYParRs \n\ne pressione o botão "INICIAR DOWNLOAD"')

        # Function to apply on clicked button [start="INICIAR DOWNLOAD DO ÁUDIO"]
    def start_audio_download(self):

        # Configuration screen to top level
        self.ytd_audios = Toplevel()
        self.ytd_audios.attributes("-topmost", 0)

        # Verify if "url_audio_search" is not empty or is TRUE
        if self.url_audio_search.get():

            # Setting value to "label_information_audios"
            self.label_information_audios['text'] = "Processando, aguarde..."

            #file = url + '.mp3'
            #tmp_file = url + '.webm'

            # Setting default "mhyt"
            url = self.url_audio_search.get()
            file = url + '.webm'
            yt_download(url, file, ismusic=True, codec="mp3")

            # Message to proccess download information
            if yt_download:
                self.label_information_audios['text'] = " "
                messagebox.showinfo('Info!', 'Download concluído!')
            else:
                messagebox.showinfo('Info!', 'Não foi possível fazer o download...')
        else:
            messagebox.showinfo('Info!', 'Insira a URL do vídeo para prosseguir. \n\nOu você inseriu uma URL inválida. \n\nTente novamente, Ex.: \n\nhttps://www.youtube.com/watch?v=0BVqFYParRs \n\ne pressione o botão "INICIAR DOWNLOAD"')

    # The "screen_initial" defined to default primary screen
    def __init__(self, screen_initial):

        # Title to screen "screen_initial"
        screen_initial.title("jpdevelopersteam")
        screen_initial['bg'] = ('lightblue')

        # Label spaccing
        self.label_spaccing = Label(screen_initial, text=" ", bg="lightblue", height=3)
        self.label_spaccing.pack()

        # Label screen title
        self.label_title = Label(screen_initial, text="YTD Vídeo Download", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_title.pack()

        # Label spaccing
        self.label_spaccing = Label(screen_initial, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Access button movies screen download
        self.btn_screen_ytd_movies_go = Button(screen_initial, text="BAIXAR VÍDEO", bg="lightgrey", width=47, height=6, fg="red", command=self.screen_ytd_movies)
        self.btn_screen_ytd_movies_go.pack()

        # Access button audios screen download
        self.btn_screen_ytd_audios_go = Button(screen_initial, text="BAIXAR MP3", bg="lightgrey", width=47, height=6, fg="red", command=self.screen_ytd_audios)
        self.btn_screen_ytd_audios_go.pack()

        # Label spaccing
        self.label_spaccing = Label(screen_initial, text=" ", bg="lightblue")
        self.label_spaccing.pack()

    # The "screen_ytd_movies" defined to secondary screen
    def screen_ytd_movies(self):

        self.ytd_movies = Toplevel()

        # Title to screen
        self.ytd_movies.title("jpdevelopersteam")
        self.ytd_movies['bg'] = ('lightblue')

        # Label spaccing
        self.label_spaccing = Label(self.ytd_movies, text=" ", bg="lightblue", height=4)
        self.label_spaccing.pack()

        # Label my scripts
        self.label_title = Label(self.ytd_movies, text="YTD Vídeo Download", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_title.pack()

        # Label to information
        self.label_show_information = Label(self.ytd_movies, text='Copie uma URL lá do "YOUTUBE" e cole no campo amarelo abaixo.', bg="lightblue")
        self.label_show_information.pack()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_movies, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # search text to locate the movies
        self.url_movie_search = Entry(self.ytd_movies, bg="yellow", width="50")
        self.url_movie_search.pack()
        self.url_movie_search.focus_set()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_movies, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Button clear
        self.btn_clear = Button(self.ytd_movies, text="LIMPAR O CAMPO DE TEXTO", bg="lightgrey", width=47, height=2, fg="red", command=self.clear_movie_search)
        self.btn_clear.pack()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_movies, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Button download start
        self.btn_start = Button(self.ytd_movies, text="INICIAR DOWNLOAD DO VÍDEO", bg="lightgreen", width=47, height=2, fg="red", command=self.start_movie_download)
        self.btn_start.pack()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_movies, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Label download proccess information movies
        self.label_information_movies = Label(self.ytd_movies, text=" ", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_information_movies.pack()

        # Resizing disabled
        # Width = disabled
        # Height = disabled
        self.ytd_movies.resizable(False, False)

        # Screen size
        # Width = 270
        # Height = 450
        # Padding-left = 600
        # Padding-top = 200
        # mainScreen.geometry("270x450+600+200")
        self.ytd_movies.geometry("600x500+430+170")

        # Altered default screen to secondary screen
        self.ytd_movies.transient(root)
        self.ytd_movies.focus_force()
        self.ytd_movies.grab_set()

    # The "screen_ytd_audios" defined to tertiary screen
    def screen_ytd_audios(self):

        self.ytd_audios = Toplevel()

        # Title to screen
        self.ytd_audios.title("jpdevelopersteam")
        self.ytd_audios['bg'] = ('lightblue')

        # Label spaccing
        self.label_spaccing = Label(self.ytd_audios, text=" ", bg="lightblue", height=4)
        self.label_spaccing.pack()

        # Label my scripts
        self.label_title = Label(self.ytd_audios, text="YTD Áudio Download", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_title.pack()

        # Informando o usuário como proceder
        self.label_show_information = Label(self.ytd_audios, text='Copie uma URL lá do "YOUTUBE" e cole no campo amarelo abaixo.', bg="lightblue")
        self.label_show_information.pack()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_audios, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # search text to locate the movies
        self.url_audio_search = Entry(self.ytd_audios, bg="yellow", width="50")
        self.url_audio_search.pack()
        self.url_audio_search.focus_set()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_audios, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Button clear
        self.btn_clear = Button(self.ytd_audios, text="LIMPAR O CAMPO DE TEXTO", bg="lightgrey", width=47, height=2, fg="red", command=self.clear_audio_search)
        self.btn_clear.pack()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_audios, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Button download start
        self.btn_start = Button(self.ytd_audios, text="INICIAR DOWNLOAD DO ÁUDIO", bg="lightgreen", width=47, height=2, fg="red", command=self.start_audio_download)
        self.btn_start.pack()

        # Label spaccing
        self.label_spaccing = Label(self.ytd_audios, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Label download proccess information audios
        self.label_information_audios = Label(self.ytd_audios, text=" ", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_information_audios.pack()

        # Resizing disabled
        # Width = disabled
        # Height = disabled
        self.ytd_audios.resizable(False, False)

        # Screen size
        # Width = 270
        # Height = 450
        # Padding-left = 600
        # Padding-top = 200
        # mainScreen.geometry("270x450+600+200")
        self.ytd_audios.geometry("600x500+430+170")

        # Altered default screen to tertiary screen
        self.ytd_audios.transient(root)
        self.ytd_audios.focus_force()
        self.ytd_audios.grab_set()

# Setting 
main(root)

# Resizing disabled
# Width = disabled
# Height = disabled
root.resizable(False, False)

# Screen size
# Width = 270
# Height = 450
# Padding-left = 600
# Padding-top = 200
# mainScreen.geometry("270x450+600+200")
root.geometry("600x500+430+170")

# try root screen to setting top level
root.withdraw()
root.deiconify()

# Start app
root.mainloop()
