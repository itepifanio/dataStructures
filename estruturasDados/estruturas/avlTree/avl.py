from no import Node
from copy import copy

class AVL:
    def __init__(self):
        self.root = None

    def __add(self, value, node):
        if node == None:
            return Node(value)
        
        if value < node.value:
            node.left = self.__add(value, node.left)
        else:
            node.right  = self.__add(value, node.right)

        return self.__balance(node)

    def add(self, value):
        self.root = self.__add(value, self.root)

    def __remove(self, value, node):
        if node:
            if value == node.value:
                # se o nó não tiver um dos filhos
                if not node.left or not node.right:
                    node = node.left or node.right
                else:
                    tmp = node.left

                    while tmp.right:
                        tmp = tmp.right

                    node.value = tmp.value
                    node.left = self.__remove(tmp.value, node.left)

            elif value > node.value:
                node.right = self.__remove(value, node.right)
            else:
                node.left = self.__remove(value, node.left)
        
        return self.__balance(node)

    def remove(self, value):
        self.root = self.__remove(value, self.root)

    def rotationRight(self, node):
        tmp = node.left
        node.left  = tmp.right
        tmp.right = node
        
        return tmp

    def rotationLeft(self, node):
        tmp = node.right
        node.right = tmp.left
        tmp.left  = node
        
        return tmp

    def __balance(self, node):
        if node != None:
            if node.fb < -1 and node.right:
                if node.right.fb <= 0: 
                    node = self.rotationLeft(node)
                else:
                    node.right = self.rotationRight(node.right)
                    node = self.rotationLeft(node)

            elif node.fb > 1 and node.left:
                if node.left.fb >= 0:
                    node = self.rotationRight(node)
                else:
                    node.left = self.rotationLeft(node.left)
                    node = self.rotationRight(node)

        return node

    def imprimir(self):
        self.__imprimir(self.root)

    def __imprimir(self, iter, indent = 0, last = None):
        if iter:
            print(" " * indent, iter.value)

            # se o nó tiver os dois filhos, então o last deve ser atualizado
            last = indent+4 if iter.right and iter.left else None

            if iter.right:
                indent +=4
                self.__imprimir(iter.right, indent, last)
            
            if iter.left:
                # se o last existir é porque o nó em questão possui um irmão que já foi impresso
                # logo o recuou deve ser igual ao do irmão
                if last:
                    indent = copy(last)
                    last = None
                else: 
                    indent +=4

                self.__imprimir(iter.left, indent, last)
            


