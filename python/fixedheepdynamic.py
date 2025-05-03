class FixedHeapArray:
    def __init__(self):
        self.arr = [i + 20 for i in range(5)]

    def print_array(self):
        print("Fixed Heap Array:", self.arr)
FixedHeapArray().print_array()