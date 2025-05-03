class StackDynamicArray:
    def __init__(self, size):
        self.arr = [i + 10 for i in range(size)]

    def print_array(self):
        print("Stack Dynamic Array:", self.arr)

size = int(input("Enter size for Stack Dynamic Array: "))
StackDynamicArray(size).print_array()