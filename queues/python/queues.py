import queue



q = queue.Queue()
q.put(1)
q.put(1)
q.put(1)
q.put(1)
q.put(1)
q.put(1)

q.get()
q.get()
q.get()
q.get()

print(q.qsize())
