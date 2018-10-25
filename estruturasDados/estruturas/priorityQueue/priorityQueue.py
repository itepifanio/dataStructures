from math import log

class PriorityQueue(capacidade):
    def __init__(self):
        self.size = 0
        self.heap = []
        self.capacidade = capacidade

    def show(self):
        level = 0.0
        for i, n in enumerate(self.heap, start=1):
            if log(i, 2) >= level+1:
                level += 1
                print()
            print(n, end="")

    def full(self):
        return size == capacidade

    def max(self, n):
        pass

    def push(self, n):
        if full():
            return False

        idx = self.size
        while(self.heap[idx] > self.heap[idx/2] && idx/2 != 0):
            tmp         = heap[idx]
            heap[idx]   = heap[idx/2]
            heap[idx/2] = tmp
            idx = idx/2
        return True

    def pop(self, n):
        pass

    def size(self):
        return self.size
