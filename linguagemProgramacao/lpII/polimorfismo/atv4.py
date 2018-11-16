from abc import ABC, abstractmethod
from math import pi

class AreaCalculavel(ABC):
    @abstractmethod
    def calcularArea(self):
        pass

class Quadrado(AreaCalculavel):
    def __init__(self, lado):
        self.lado = lado

    def calcularArea(self):
        return self.lado**2

class Circunferencia(AreaCalculavel):
    def __init__(self, raio):
        self.raio = raio

    def calcularArea(self):
        return pi*(self.raio**2)

class Retangulo(AreaCalculavel):
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def calcularArea(self):
        return self.x*self.y

def main():
    r = Retangulo(3,4)
    c = Circunferencia(4)
    q = Quadrado(4)

    print(r.calcularArea())
    print(c.calcularArea())
    print(q.calcularArea())
if __name__ == '__main__':
    main()
