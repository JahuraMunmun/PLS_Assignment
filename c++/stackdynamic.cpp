#include <iostream>
using namespace std;

class StackDynamicArray {
    int* arr;
    int size;

public:
    
    StackDynamicArray(int s) : size(s) {
        arr = new int[size];  
        for (int i = 0; i < size; ++i)
            arr[i] = i + 10; 
    }

    void print() {
        cout << "Stack Dynamic Array: ";
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~StackDynamicArray() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "Enter size for Stack Dynamic Array: ";
    cin >> size;

    StackDynamicArray b(size);
    b.print();

    return 0; 
}
