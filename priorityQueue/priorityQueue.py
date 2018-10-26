class BinaryHeap:
    def __init__(self):
        self.size = 0
        self.heap = [None]
        self.n = 0

    # Tentei usar __str__ para imprimir, mas só consegui com
    # esse gerador do pop
    def __iter__(self):
        if self.size > 0:
            n = self.size if self.size < self.n else self.n
        else:
            n = self.n
        for i in range(n):
            yield self.pop()

    def swap(self, i, j):
        self.heap[i], self.heap[j] = self.heap[j], self.heap[i]

    def empty(self):
        return True if len(self.heap) == 1 and self.n == 0 else False

    def takeLeft(self, k):
        while k > 1 and (self.heap[k] - self.heap[k // 2]) < 0:
            self.swap(k//2, k)
            k = k//2

    def takeRight(self, k):
        while 2*k <= self.n:
            j = 2*k
            if j < self.n and (self.heap[j + 1] - self.heap[j]) < 0:
                j += 1
            if not (self.heap[j] - self.heap[k]) < 0:
                break
            self.swap(k, j)
            k = j

    def push(self, val):
        self.heap.append(val)
        self.n += 1
        self.takeLeft(self.n)

    # Ignoramos o None do init dessa classe
    def top(self):
        return None if not self.empty else self.heap[1]

    def delete(self, k):
        if self.n == 0:
            return None
        self.swap(k, self.n)
        popped = self.heap.pop(-1)
        self.n -= 1
        self.takeRight(k)
        return popped

    def pop(self):
        return self.delete(1)

    def remove(self, val):
        for i in range(1, self.n + 1):
            if self.heap[i] - val == 0:
                return self.delete(i)





batata = BinaryHeap()
batata.push(4)
batata.push(3)
batata.push(2)
batata.push(6)
batata.pop()

for i in batata:
    print(i)
