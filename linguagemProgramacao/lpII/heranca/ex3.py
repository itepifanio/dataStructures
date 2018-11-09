class Veiculo:
    # Ligado should be a boolean
    def __init__(self):
        self.ligado = False

    def _type(self):
        return self.__class__.__name__

    @property
    def ligado(self):
        return self.__ligado

    @ligado.setter
    def ligado(self, ligado):
        self.__ligado = ligado

    def ligar(self):
        print(str(self._type()) + " ligado")
        self.ligado = True

    def desligar(self):
        print(str(self._type()) + " desligado")
        self.ligado = False

class Automovel(Veiculo):
    pass

class Motocicleta(Veiculo):
    pass

class Onibus(Veiculo):
    pass

def main():
    a = Automovel()
    a.ligar()
    a.desligar()
    print(a.ligado)

    print()

    m = Motocicleta()
    m.ligar()
    m.desligar()
    print(m.ligado)

    print()

    o = Onibus()
    o.ligar()
    o.desligar()
    print(o.ligado)

if __name__ == "__main__":
    main()
