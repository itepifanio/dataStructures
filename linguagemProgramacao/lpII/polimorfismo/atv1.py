class Viajante:
    mensagem = ""
    def __init__(self, cls):
        self.cls = cls
    
    def dizerOla(self):
        print(self.cls.mensagem)

class Brasileiro(Viajante):
    mensagem = "Olá"
    
class Espanhol(Viajante):
    mensagem = "Hola"
    
class Americano(Viajante):
    mensagem = "Hello"
    
Viajante(Americano).dizerOla()
