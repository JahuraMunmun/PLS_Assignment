#include <iostream>
using namespace std;

class FixedStackArray {
    int arr[5];  
public:
    FixedStackArray() {
        for (int i = 0; i < 5; ++i) arr[i] = i + 1;
    }

    void print() {
        cout << "Fixed Stack Array: ";
        for (int i = 0; i < 5; ++i) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    FixedStackArray a;
    a.print();
    return 0;
}
