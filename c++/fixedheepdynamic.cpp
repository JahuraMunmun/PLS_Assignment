#include <iostream>
using namespace std;

class FixedHeapArray {
    int* arr;
public:
    FixedHeapArray() {
        arr = new int[5];
        for (int i = 0; i < 5; ++i)
            arr[i] = i + 20;
    }

    void print() {
        cout << "Fixed Heap Array: ";
        for (int i = 0; i < 5; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~FixedHeapArray() {
        delete[] arr;
    }
};

int main() {
    FixedHeapArray c;
    c.print();
    return 0; 
}
