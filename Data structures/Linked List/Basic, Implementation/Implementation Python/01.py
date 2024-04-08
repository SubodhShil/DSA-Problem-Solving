class Node:
    def __init__(self, data=None, next=None) -> None:
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self) -> None:
        self.head = None
        self.tail = None

    def __iter__(self):
        iteratorNode = self.head

        while node:
            pass

    def insertHead(self, currentNode: Node):
        currentNode.next = self.head

    def insert(self, value, index=0):
        newNode = Node(value)

        if self.head is None:
            self.head = newNode
            self.tail = newNode
            return

        if index == 0:
            self.insertHead(newNode)

ll = SinglyLinkedList()
ll.head = Node(1)
ll.tail = Node(2)
# connect
ll.head.next = ll.tail

if __name__ == '__main__':
    pass
