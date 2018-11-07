

class Ponto2d:
    def __init__(self, x, y):
        self.x = x
        self.y = y 
        
    def __str__(self):
        return "({}, {})".format(self.x, self.y)
        
class Ponto3d(Ponto2d):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z
        
    def __str__(self):
        return "({}, {}, {})".format(self.x, self.y, self.z)
        
        
print(Ponto3d("1","2","3"))
