#include <iostream>
using namespace std;

int main() {
    int* arr = nullptr;
    int size = 0, num;

    cout << "Enter numbers (-1 to stop): ";
    while (cin >> num && num != -1) {
        int* temp = new int[size + 1];
        for (int i = 0; i < size; i++) temp[i] = arr[i];
        temp[size] = num;
        delete[] arr;
        arr = temp;
        size++;
    }

    cout << "Your values: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}
