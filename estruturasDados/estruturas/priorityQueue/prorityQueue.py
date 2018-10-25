from heapq import heappush, heappop, heapify

class PriorityQueue:
    def __init__(self):
        self.queue = []
        self.i = 0

    def __str__(self):
        result = []
        while self.queue:
            result.append(heappop(self.queue))
        return ' '.join([str(i[0]) for i in result])

    def push(self, n, priority):
        heappush(self.queue, (n, priority))
        self.i += 1

    def remove(self):
        self.i = 0
        return self.heappop(self.queue)[-1]

myPriorityQueue = PriorityQueue()
myPriorityQueue.push("code", 2)
myPriorityQueue.push("eat", 1)
myPriorityQueue.push("sleep", 3)

print(myPriorityQueue)
