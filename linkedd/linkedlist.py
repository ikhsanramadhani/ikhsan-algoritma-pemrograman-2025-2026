class Node:
    def _init_(self, data):
        self.data = data
        self.next = None


# Pointer awal linked list
head = None


# Menambahkan data baru di posisi paling depan
def insertNode(n):
    global head
    newNode = Node(n)
    newNode.next = head
    head = newNode
    print(f"Insert {n} | DATA MENJADI >> [ ", end="")
    

# Menampilkan isi linked list
def display():
    global head
    if head is None:
        print(">> List Is Empty !")
        return

    temp = head
    print("[ ", end="")
    while temp is not None:
        print(temp.data, end=" ")
        temp = temp.next
    print("]\n")


# Menghapus elemen pertama
def deleteItem():
    global head
    if head is None:
        print(">> List Is Empty !")
        return

    print(f"({head.data}) Removed | DATA MENJADI >> [ ", end="")
    head = head.next


# Main program
if __name__ == "_main_":
    display()
    display()

    insertNode(13)
    display()

    insertNode(22)
    display()

    insertNode(28)
    display()

    insertNode(35)
    display()

    deleteItem()
    display()

    deleteItem()
    display()

    deleteItem()
    display()