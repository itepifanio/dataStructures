class Ponto2d:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__(self):
        return "{}, {}".format(self.x, self.y)

    @property
    def x(self):
        return self.__x

    @x.setter
    def x(self, x):
        self.__x = x

    @property
    def y(self):
        return self.__y

    @y.setter
    def y(self, y):
        self.__y = y

class Ponto3d(Ponto2d):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z

    def __str__(self):
        return "{}, {}".format(Ponto2d.__str__(self), self.z)

    @property
    def r(self):
        return self.__r

    @r.setter
    def r(self, r):
        self.__r = r

def main():
    print(Ponto2d("1","2"))
    print(Ponto3d("1","2","3"))

if __name__ == "__main__":
    main()
