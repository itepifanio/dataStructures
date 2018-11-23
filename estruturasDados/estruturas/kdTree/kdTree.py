class Node:
    def __init__(self, data=None, left=None, right=None):
        self.data  = data
        self.left  = left
        self.right = right

class Tree:
    def __init__(self):
        self.root = None
        self.DIM  = 2
        self.cd   = 0

    def isEmpty(self):
        return self.root == None

    def insert(self, arr, node=None, cd=None):
        if self.root == None:
            self.root = Node(arr)
        elif node == None:
            node = Node(arr)
        elif arr[cd] < node.data[cd]:
            node.left  = insert(arr, node.left, (cd+1)% self.DIM)
        else:
            node.right = insert(arr, node.right, (cd+1)% self.DIM)

    def search(self, data):
        return self._search(data, self.root, 0)

    def _search(self, data, node=None, cd=None):
        found = False
        if node == None:
            return False
        else:
            if arr[cd] == node.data[cd]:
                if arr[0] == node.data[0] and arr[1] == node.data[1]:
                    return True
            elif arr[cd] < node.data[cd]:
                found = self._search(arr, node.left, (cd+1)%self.DIM)
            elif arr[cd] > node.data[cd]:
                found = self._search(arr, node.right, (cd+1)%self.DIM)
            return found

    def show(self):
        self._show(self.root)

    def _show(self, node = None):
        if(node != None):
            print("({},{})".format(node.data[0], node.data[1]), end="")
            self._show(node.left)
            self._show(node.right)


knt = Tree()
arr = [1,2]
knt.insert(arr)
arr = [3,4]
knt.insert(arr)
knt.show()
