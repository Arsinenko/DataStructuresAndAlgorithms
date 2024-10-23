class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None  # Измените это на None

    def addLast(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next

        temp.next = new_node
    def removeLast(self):
        if self.head is None:
            print("List is empty")
            return
        if self.head.next is None:
            self.head = None
            return
        temp = self.head
        while temp is not None and temp.next.next is not None:
            temp = temp.next
        temp.next = None


    def addFirst(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        new_node.next = self.head
        self.head = new_node

    def removeFirst(self):
        if self.head is None:
            print("List is empty")
            return
        self.head = self.head.next


    def display(self):
        temp = self.head
        while temp is not None:
            print(f"{temp.data} -> ", end=" " if temp.next else "")
            temp = temp.next
        print("None")


