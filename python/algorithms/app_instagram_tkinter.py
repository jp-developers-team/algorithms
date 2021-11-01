# Import libraries native
from tkinter import *
from tkinter import messagebox

# Import third party libraries to working with instagram
from instapy import InstaPy
from instapy import smart_run

# Setting variable using library "tkinter"
root = Tk()

# Main Class instantied
class main:

    # Destroyng life cicle __init__ "initial_screen"
    def cancel(self):
        # get user response selected
        response = messagebox.askquestion("Cancelar", "Deseja mesmo encerrar o App ?", icon='warning')

        # verify response return
        if response == 'yes':
            root.quit()

    # Destroyng life cicle "screen_like_by_tags"
    def destroy_like_by_tags(self):
        self.screen_like_by_tags.destroy()

    # Destroyng life cicle "screen_like_by_feeds"
    def destroy_like_by_feeds(self):
        self.screen_like_by_feeds.destroy()

    # Destroyng life cicle "screen_like_by_locations"
    def destroy_like_by_locations(self):
        self.screen_like_by_locations.destroy()

    # Cleaning all inputs text in form elements of "screen_like_by_tags"
    def clear_like_by_tags(self):
        self.username.delete(0, END)
        self.password.delete(0, END)
        self.tags.delete(0, END)
        self.my_comments.delete(0, END)
        self.amount.delete(0, END)

    # Cleaning all inputs text in form elements of "screen_like_by_feeds"
    def clear_like_by_feeds(self):
        print("clear_like_by_feeds cleaned!")

    # Cleaning all inputs text in form elements of "screen_like_by_locations"
    def clear_like_by_locations(self):
        print("clear_like_by_feeds cleaned!")

    # Starting instagram bot in screen_like_by_tags
    def start_like_by_tags(self):

        # Configuration screen to top level
        self.screen_like_by_tags = Toplevel()
        self.screen_like_by_tags.attributes("-topmost", 0)

        # Verify if "url_like_by_tags_search" is not empty or is TRUE
        if self.tags.get():

            # Setting Message to proccess information value to "label_information_like_by_tags"
            self.label_information_like_by_tags['text'] = "Processando, aguarde..."

            #########################################GET ALL DATA START#########################################
            # Get all data from form elements "screen_like_by_tags"
            tags = self.tags.get()
            my_comments = self.my_comments.get()
            username = self.username.get()
            password = self.password.get()
            amount = self.amount.get()
            set_comments_media = self.set_comments_media.get()
            #########################################GET ALL DATA END#########################################

            # print("TAGS: ......" + tags)
            # print("COMMENTS: .." + my_comments)
            # print("USER: ......" + username)
            # print("PASSWORD: .." + password)
            # print("QUANTITY: .." + amount)
            # print("MEDIA TYPE: " + set_comments_media)

            # exit()

            #########################################INSTAPY CODE START#########################################
            # Authentication Instagram Account
            # SEU_USUARIO_SEM_ARROBA
            # SUA_SENHA
            # session = InstaPy(username='SEU_USUARIO', password='SUA_SENHA', headless_browser=False)
            session = InstaPy(username=username, password=password, headless_browser=False)

            if session:
                # Message to proccess started online
                self.label_information_like_by_tags['text'] = "Processando aguarde..."
            else:
                # Message to proccess started offline
                self.label_information_like_by_tags['text'] = " "


            # Configurar "smart_run" para usar dados da autenticação da "session"
            with smart_run(session):
                # Seguir 100% dos perfis das "TAGS" que o bot encontrar
                session.set_do_follow(enabled=True, percentage=100)

                # Dar o like/joinha em 100% dos perfis que o bot encontrar
                session.set_do_like(enabled=True, percentage=100)

                # Curtir, seguir e comentar por Hashtags/palavra chave => ex.: "alienigenadopassado" e/ou "alienígenadopassado"
                # "amount=5" => total de 5 media, [set_comments_media = "Photo" or "Video"]
                # NÃO RECOMENDADO COLOCAR MAIS DE 800 FOTOS => amount=800
                # session.like_by_tags(['bossabrasil', 'bossanova', 'bossajazz'], amount=5)
                session.like_by_tags([tags], amount)

                # Fazer comentários automáticos de forma marretada, TEM QUE TER PELO MENOS 10 COMENTÁRIOS
                my_comments1 = [
                    'Muito bom parabéns pela postagem',
                    'Adorei seu post',
                    'Que legal amei!',
                    'Muito boa sua postagem',
                    'Gostei muito do conteúdo',
                    'Parabéns pelo post',
                    'Por mais post assim',
                    'Adoro isso!',
                    'Que maravilha de postagem',
                    'Beleza de conteúdo'
                ]

                my_comments2 = [
                    'Very good congratulations on your post',
                    'I loved your post',
                    'How cool, I loved it!',
                    'Very good your post',
                    'I really liked the content',
                    'Congratulations on the post',
                    'For more post like that',
                    'Love it!',
                    'What a wonderful post',
                    'Beauty of content'
                ]

                # Comentar automáticamente 95% dos perfis que o bot encontrar
                session.set_do_comment(enabled=True, percentage=95)

                # Selecionando foto ou vídeo para dar curtidas/likes
                session.set_comments(my_comments, media=set_comments_media)

                # Inicializando
                session.join_pods()
                #########################################INSTAPY CODE END#########################################

        else:
            messagebox.showinfo('Info!', 'Você precisa informar pelo menos 01 TAG para prosseguir. \nOu você adicionou uma ou mais tag(s) de forma inválida. \n\nTente novamente digitando uma ou mais TAGS, Ex.: \n\nannunaki, filosofia, jazz \n\nSepare as palavras "SOMENTE POR VÍRGULA" e pressione o botão "INICIAR PROCESSO"')

    # Starting instagram bot in screen_like_by_feeds
    def start_like_by_feeds(self):

        messagebox.showinfo('Info!', 'Em breve aguarde por start_like_by_feeds!')

    # Starting instagram bot in screen_like_by_locations
    def start_like_by_locations(self):

        messagebox.showinfo('Info!', 'Em breve aguarde por start_like_by_locations!')

    # Form elements of "screen_initial" main screen
    def __init__(self, screen_initial):

        # Title to screen "screen_initial"
        screen_initial.title("jpdevelopersteam")
        screen_initial['bg'] = ('lightblue')

        # Label spaccing
        self.label_spaccing = Label(screen_initial, text=" ", bg="lightblue", height=3)
        self.label_spaccing.pack()

        # Label screen title
        self.label_title = Label(screen_initial, text="Instagram Bot", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_title.pack()

        # Label spaccing
        self.label_spaccing = Label(screen_initial, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Access button like by tags screen download
        self.btn_screen_like_by_tags_go = Button(screen_initial, text="CURTIR POR #TAGS", bg="lightgrey", width=47, height=6, fg="red", command=self.screen_like_by_tags)
        self.btn_screen_like_by_tags_go.pack()

        # Access button like by feeds screen download
        self.btn_screen_like_by_feeds_go = Button(screen_initial, text="CURTIR POR FEEDS", bg="lightgrey", width=47, height=6, fg="red", command=self.screen_like_by_feeds)
        self.btn_screen_like_by_feeds_go.pack()

        # Access button like by location screen download
        self.btn_screen_like_by_locations_go = Button(screen_initial, text="CURTIR POR GEOLOCALIZAÇÃO", bg="lightgrey", width=47, height=6, fg="red", command=self.screen_like_by_locations)
        self.btn_screen_like_by_locations_go.pack()

        # Label spaccing
        self.label_spaccing = Label(screen_initial, text=" ", bg="lightblue")
        self.label_spaccing.pack()

        # Button proccess cancel
        self.btn_cancel = Button(screen_initial, text="CANCELAR", bg="lightgrey", width=16, height=2, fg="red", command=root.quit)
        self.btn_cancel.place(x=230, y=608)

    # Form elements of "screen_like_by_tags"
    def screen_like_by_tags(self):

        self.screen_like_by_tags = Toplevel()

        # Title to screen
        self.screen_like_by_tags.title("jpdevelopersteam")
        self.screen_like_by_tags['bg'] = ('lightblue')

        # Label Title
        self.label_title = Label(self.screen_like_by_tags, text="CURTIR POR #TAGS", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_title.place(x=18, y=50)

        # Label Username
        self.label_username = Label(self.screen_like_by_tags, text="Usuário: ", bg="lightblue", width=10, height=1, font=("verdana", 10, "bold"))
        self.label_username.place(x=100, y=150)

        # Input Username
        self.username = Entry(self.screen_like_by_tags, bg="yellow", width="40")
        self.username.insert(0, "DIGITE_SEU_LOGIN_SEM_ARROBA")
        self.username.place(x=180, y=153)
        self.username.focus_set()

        # Label Space
        self.label_space = Label(self.screen_like_by_tags, text=" ", bg="lightblue", height=1)
        self.label_space.pack()

        # Label Password
        self.label_password = Label(self.screen_like_by_tags, text="Senha: ", bg="lightblue", width=10, height=1, font=("verdana", 10, "bold"))
        self.label_password.place(x=105, y=184)

        # Input Password
        self.password = Entry(self.screen_like_by_tags, bg="yellow", width="40", show='*')
        self.password.insert(0, "DIGITE_SUA_SENHA")
        self.password.place(x=180, y=187)

        # Label Space
        self.label_space = Label(self.screen_like_by_tags, text=" ", bg="lightblue", height=1)
        self.label_space.pack()

        # Label to information Tags
        self.label_tags = Label(self.screen_like_by_tags, text='Agora digite uma ou mais TAGS, Ex.: \n\nannunaki, filosofia \n\nSepare as tags "SOMENTE POR VÍRGULA"', bg="lightblue", height=5, font=("verdana", 8, "bold"))
        self.label_tags.place(x=160, y=223)

        # Label Tags
        self.label_tags = Label(self.screen_like_by_tags, text="Tags: ", bg="lightblue", width=10, height=1, font=("verdana", 10, "bold"))
        self.label_tags.place(x=111, y=320)

        # search text to locate the movies
        self.tags = Entry(self.screen_like_by_tags, bg="yellow", width="40")
        self.tags.insert(0, "bossabrasil, bossanova, bossajazz")
        self.tags.place(x=180, y=324)

        # Label Space
        self.label_space = Label(self.screen_like_by_tags, text=" ", bg="lightblue", height=1)
        self.label_space.pack()

        # Label to information Comments
        self.label_show_information_comments = Label(self.screen_like_by_tags, text='Agora digite um ou mais COMENTÁRIOS, Ex.: \n\nBelo post parabéns, Amei sua postagem \n\nSepare os comentários "SOMENTE POR VÍRGULA" \nCada vírgula representa um "COMENTÁRIO"', bg="lightblue", height=6, font=("verdana", 8, "bold"))
        self.label_show_information_comments.place(x=140, y=360)

        # Label Space
        self.label_space = Label(self.screen_like_by_tags, text=" ", bg="lightblue", height=1)
        self.label_space.pack()

        # Label Comments
        self.label_my_comments = Label(self.screen_like_by_tags, text="Comentários: ", bg="lightblue", width=15, height=1, font=("verdana", 10, "bold"))
        self.label_my_comments.place(x=58, y=452)

        # Setting my comments
        self.my_comments = Entry(self.screen_like_by_tags, bg="yellow", width="40")
        self.my_comments.insert(0, "Muito bom parabéns pela postagem,  Adorei seu post,  Que legal amei!,  Muito boa sua postagem,  Gostei muito do conteúdo,  Parabéns pelo post, Por mais post assim, Adoro isso!, Que maravilha de postagem, Beleza de conteúdo")
        self.my_comments.place(x=180, y=456)

        # Label Space
        self.label_space = Label(self.screen_like_by_tags, text=" ", bg="lightblue", height=1)
        self.label_space.pack()

        # Label Set Comments Sedia
        self.label_amount = Label(self.screen_like_by_tags, text="Qtd Fotos/Videos: ", bg="lightblue", width=20, height=1, font=("verdana", 10, "bold"))
        self.label_amount.place(x=18, y=487)

        # Setting Amount of Photos or Videos
        self.amount = Entry(self.screen_like_by_tags, bg="yellow", width="40")
        self.amount.insert(0, "5")
        self.amount.place(x=180, y=490)

        # Label Space
        self.label_space = Label(self.screen_like_by_tags, text=" ", bg="lightblue", height=1)
        self.label_space.pack()

        # Label Type Media
        self.label_type_media = Label(self.screen_like_by_tags, text="Like Fotos/Videos?: ", bg="lightblue", width=20, height=1, font=("verdana", 10, "bold"))
        self.label_type_media.place(x=18, y=520)

        # Variable type String to the attribute "set_comments_media" => "tyep_media=["Photo", "Video"]"
        self.set_comments_media = StringVar()

        # Radio Type Media Photo
        self.type_media_photo = Radiobutton(self.screen_like_by_tags, text='Foto', bg="lightblue", height=1, variable=self.set_comments_media, value="Photo", font=("verdana", 10, "bold"))
        self.type_media_photo.select()
        self.type_media_photo.place(x=180, y=520)

        # Radio Type Media Video
        self.type_media_video = Radiobutton(self.screen_like_by_tags, text='Vídeo', bg="lightblue", height=1, variable=self.set_comments_media, value="Video", font=("verdana", 10, "bold"))
        self.type_media_video.place(x=240, y=520)

        # Button clear
        self.btn_clear = Button(self.screen_like_by_tags, text="LIMPAR OS CAMPOS DE TEXTO", bg="lightgrey", width=34, height=2, fg="red", command=self.clear_like_by_tags)
        self.btn_clear.place(x=167, y=560)

        # Button back go
        self.btn_back = Button(self.screen_like_by_tags, text="VOLTAR", bg="lightgrey", width=16, height=2, fg="red", command=self.destroy_like_by_tags)
        self.btn_back.place(x=100, y=608)

        # Button start proccess
        self.btn_start = Button(self.screen_like_by_tags, text="INICIAR", bg="lightgrey", width=16, height=2, fg="red", command=self.start_like_by_tags)
        self.btn_start.place(x=230, y=608)

        # Button proccess cancel
        self.btn_cancel = Button(self.screen_like_by_tags, text="CANCELAR", bg="lightgrey", width=16, height=2, fg="red", command=self.cancel)
        self.btn_cancel.place(x=360, y=608)

        # Label Space
        self.label_space = Label(self.screen_like_by_tags, text=" ", bg="lightblue", height=1)
        self.label_space.pack()

        # Label information status started proccess
        self.label_information_like_by_tags = Label(self.screen_like_by_tags, text=' ', bg="lightblue", height=4, font=("verdana", 8, "bold"))
        self.label_information_like_by_tags.place(x=150, y=680)

        # Resizing disabled
        # Width = disabled
        # Height = disabled
        self.screen_like_by_tags.resizable(False, False)

        # Screen size
        # Width = 270
        # Height = 450
        # Padding-left = 600
        # Padding-top = 200
        # mainScreen.geometry("270x450+600+200")
        self.screen_like_by_tags.geometry("600x750+600+50")

        # Altered default screen to secondary screen
        self.screen_like_by_tags.transient(root)
        self.screen_like_by_tags.focus_force()
        self.screen_like_by_tags.grab_set()

    # Form elements of "screen_like_by_feeds"
    def screen_like_by_feeds(self):

        self.screen_like_by_feeds = Toplevel()

        # Title to screen
        self.screen_like_by_feeds.title("jpdevelopersteam")
        self.screen_like_by_feeds['bg'] = ('lightblue')

        # Label spaccing
        self.label_spaccing = Label(self.screen_like_by_feeds, text=" ", bg="lightblue", height=4)
        self.label_spaccing.pack()

        # Label my scripts
        self.label_title = Label(self.screen_like_by_feeds, text="Curtir por Feeds", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_title.pack()

        # Button back go
        self.btn_back = Button(self.screen_like_by_feeds, text="VOLTAR", bg="lightgrey", width=16, height=2, fg="red", command=self.destroy_like_by_feeds)
        self.btn_back.place(x=100, y=608)

        # Button start proccess
        self.btn_start = Button(self.screen_like_by_feeds, text="INICIAR", bg="lightgrey", width=16, height=2, fg="red", command=self.start_like_by_feeds)
        self.btn_start.place(x=230, y=608)

        # Button proccess cancel
        self.btn_cancel = Button(self.screen_like_by_feeds, text="CANCELAR", bg="lightgrey", width=16, height=2, fg="red", command=self.cancel)
        self.btn_cancel.place(x=360, y=608)

        # Resizing disabled
        # Width = disabled
        # Height = disabled
        self.screen_like_by_feeds.resizable(False, False)

        # Screen size
        # Width = 270
        # Height = 450
        # Padding-left = 600
        # Padding-top = 200
        # mainScreen.geometry("270x450+600+200")
        self.screen_like_by_feeds.geometry("600x700+600+80")

        # Altered default screen to tertiary screen
        self.screen_like_by_feeds.transient(root)
        self.screen_like_by_feeds.focus_force()
        self.screen_like_by_feeds.grab_set()

    # Form elements of "screen_like_by_locations"
    def screen_like_by_locations(self):

        self.screen_like_by_locations = Toplevel()

        # Title to screen
        self.screen_like_by_locations.title("jpdevelopersteam")
        self.screen_like_by_locations['bg'] = ('lightblue')

        # Label spaccing
        self.label_spaccing = Label(self.screen_like_by_locations, text=" ", bg="lightblue", height=4)
        self.label_spaccing.pack()

        # Label my scripts
        self.label_title = Label(self.screen_like_by_locations, text="Curtir por Geolocalização", bg="lightblue", width=40, height=2, font=("verdana", 16, "bold"))
        self.label_title.pack()

        # Label to information
        self.label_show_information = Label(self.screen_like_by_locations, text='Logo logo, será implementado!!!', bg="lightblue")
        self.label_show_information.pack()

        # Button back go
        self.btn_back = Button(self.screen_like_by_locations, text="VOLTAR", bg="lightgrey", width=16, height=2, fg="red", command=self.destroy_like_by_locations)
        self.btn_back.place(x=100, y=608)

        # Button start proccess
        self.btn_start = Button(self.screen_like_by_locations, text="INICIAR", bg="lightgrey", width=16, height=2, fg="red", command=self.start_like_by_locations)
        self.btn_start.place(x=230, y=608)

        # Button proccess cancel
        self.btn_cancel = Button(self.screen_like_by_locations, text="CANCELAR", bg="lightgrey", width=16, height=2, fg="red", command=self.cancel)
        self.btn_cancel.place(x=360, y=608)

        # Resizing disabled
        # Width = disabled
        # Height = disabled
        self.screen_like_by_locations.resizable(False, False)

        # Screen size
        # Width = 270
        # Height = 450
        # Padding-left = 600
        # Padding-top = 200
        # mainScreen.geometry("270x450+600+200")
        self.screen_like_by_locations.geometry("600x700+600+80")

        # Altered default screen to tertiary screen
        self.screen_like_by_locations.transient(root)
        self.screen_like_by_locations.focus_force()
        self.screen_like_by_locations.grab_set()

# Setting main class
main(root)

# Resizing disabled
# Width = disabled
# Height = disabled
root.resizable(False, False)

# Resizing available
# Width = disabled
# Height = disabled
#root.resizable(True, True)

# Screen size setting
# Width = 600
# Height = 750
# Padding-left = 600
# Padding-top = 50
root.geometry("600x750+600+50")

# try root screen to setting top level
root.withdraw()
root.deiconify()

# Start app
root.mainloop()