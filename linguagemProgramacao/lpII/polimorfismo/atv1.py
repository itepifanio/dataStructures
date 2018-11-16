class Viajante:  
    def __init__(self, cls):
        self.cls = cls
    
    def dizerOla(self):
        self.cls.dizerOla(self)

class Brasileiro(Viajante):
    def dizerOla(self):
        print("Ola")
    
class Espanhol(Viajante):
    def dizerOla(self):
        print("Hola")
    
class Americano(Viajante):
    def dizerOla(self):
        print("Hello")
    
class TestandoNacionalidade:
    def main():
        v1 = Viajante(Americano).dizerOla()
        v2 = Viajante(Brasileiro).dizerOla()
        v3 = Viajante(Espanhol).dizerOla()
    if __name__ == '__main__':
        main()
        
        
TestandoNacionalidade()
