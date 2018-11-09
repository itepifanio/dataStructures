class Figura:
    pass

class Quadrado:
    def __init__(self, l):
        self.l = l

    def __repr__(self):
        return "Quadrado: {}".format(self.l)

    def calcularArea(self):
        return self.l**2

class Retangulo:
    def __init__(self, l, h):
        self.l = l
        self.h = h

    def __repr__(self):
        return "Retangulo: {}, {}".format(self.l, self.h)

    def calcularArea(self):
        return self.l * self.h

class FiguraComplexa:
    def __init__(self, *args):
        self.figuras = []
        self.figuras += list(args)

    def __repr__(self):
        return ", \n".join(map(str, self.figuras))

    def adicionarFigura(self, figura):
        self.figuras.append(figura)

    def calcularArea(self):
        return sum([i.calcularArea() for i in self.figuras])

class Calculador:
    def __init__(self):
        self.f = FiguraComplexa(
            Quadrado(3),Quadrado(10),
            Retangulo(2,7), Retangulo(5,3)
        )
    def __str__(self):
        return str(self.f)

    def calcularArea(self):
        return "Area total: {}".format(self.f.calcularArea())

def main():
    print(Calculador())
    print()
    print(Calculador().calcularArea())

if __name__ == "__main__":
    main()
