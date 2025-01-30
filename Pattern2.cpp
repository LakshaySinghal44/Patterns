#include <iostream>
using namespace std;

int main() {
    int n;
    
    do {
        cout << "Enter a positive number: ";
        cin >> n;
        
        if (n <= 0) {
            cout << "Invalid input! Please enter a positive integer.\n";
        }
    } while (n <= 0);  // Keep asking until valid input is provided

    for (int i = 1; i <= n; i++) {
        cout << string(i, '*') << endl;
    }
}
