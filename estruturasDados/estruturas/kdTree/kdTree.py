class Node:
    def __init__(self, data=None, left=None, right=None):
        self.data  = data
        self.left  = left
        self.right = right

class Tree:
    def __init__(self):
        self.root = None
        self.DIM  = 1 if not self.root else len(self.root.data)
        # current dimension
        self.cd   = 0

    def isEmpty(self):
        return self.root == None

    def insert(self, data):
        self.root = self._insert(data, self.root, self.cd)

    def _insert(self, arr, node=None, cd=None):
        if node == None:
            node = Node(arr)
        elif arr[cd] < node.data[cd]:
            node.left  = self._insert(arr, node.left, (cd+1) % self.DIM)
        else:
            node.right = self._insert(arr, node.right, (cd+1)% self.DIM)

        return node

    def search(self, data):
        return self._search(data, self.root, 0)

    def _search(self, data, node=None, cd=None):
        found = None
        if node == None:
            return None
        else:
            if data[cd] == node.data[cd]:
                if data == node.data:
                    return node
            elif data[cd] < node.data[cd]:
                found = self._search(arr, node.left, (cd+1)%self.DIM)
            elif data[cd] > node.data[cd]:
                found = self._search(arr, node.right, (cd+1)%self.DIM)
            return found

    def _samepoints(self, a, b):
        for i in range(len(b)):
            if a[i] != b[i]:
                return False
        return True

    def _copypoints(self, a, b):
        for i in range(len(b)):
            a[i] = b[i]

    def _minNode(self, x, y, z, d):
        res = x
        if y != None and y.data[d] < res.data[d]:
            res = y
        if z != None and y.data[d] < res.data[d]:
            res = z

        return res

    def _findMinRec(self, node, d, depth):
        if node == None:
            return None

        cd = depth % self.DIM

        if cd == d:
            if node.left == None:
                return node
            return self._findMinRec(node.left, d, depth+1)

        return minNode(
            node,
            self._findMinRec(node.left, d, depth+1),
            self._findMinRec(node.right, d, depth+1)
        )

    def _findMin(self, node, d):
        return self._findMinRec(node, d, 0)

    def _deleteNodeRec(self, node, data, depth):
        if node == None:
            return None

        cd = depth % self.DIM

        if self._samepoints(node.data, data):
            if node.right != None:
                min = self._findMin(node.right, cd)
                self._copypoints(node.data, min.data)
                node.right = self._deleteNodeRec(
                    node.right,
                    min.data,
                    depth+1
                )
            elif node.left != None:
                min = self._findMin(node.left, cd)
                self._copypoints(node.data, min.data)
                node.right = self._deleteNodeRec(
                    node.left,
                    min.data,
                    depth+1
                )
            else:
                node = None
                return None

            return node

        if data[cd] < node.data[cd]:
            node.left = self._deleteNodeRec(
                node.left, data, depth+1
            )
        else:
            node.right = self._deleteNodeRec(
                node.right, data, depth+1
            )

        return node

    def deleteNode(self, data):
        return self._deleteNodeRec(self.root, data, 0)

    def show(self):
        self._show(self.root)

    def _show(self, node = None):
        if(node != None):
            print("{}".format(node.data), end="")
            self._show(node.left)
            self._show(node.right)


knt = Tree()
arr = [1,2]
knt.insert(arr)
arr = [3,4]
knt.insert(arr)
knt.insert([5,6])
knt.insert([8,7])
knt.insert([7,8])
knt.insert([2,1])

knt.show()
print()

print(knt.search([1,2]).data)

knt.deleteNode([3,4])
knt.show()
