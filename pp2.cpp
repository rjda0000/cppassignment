#include <iostream>
using namespace std;

int main() {
    int base_height, base_width, head_width;

    // Step 1: Input arrow base height and width
    cout << "Enter arrow base height and width: ";
    cin >> base_height >> base_width;

    // Step 2: Input arrow head width (ensure it's larger than base width)
    do {
        cout << "Enter arrow head width (larger than base width): ";
        cin >> head_width;
    } while (head_width <= base_width);

    // Draw rectangle
    for (int i = 0; i < base_height; i++) {
        for (int j = 0; j < base_width; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Draw arrow head
    for (int i = head_width; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

