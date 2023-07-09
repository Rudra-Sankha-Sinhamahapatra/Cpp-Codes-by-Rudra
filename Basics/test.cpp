#include <iostream>
using namespace std;

int goodcode(int a, int b) {
    return a % b;
}

int main() {
    int c, d;
    cout << "Enter the first number: ";
    cin >> c;
    cout << "Enter the second number: ";
    cin >> d;

    cout << "Coding is necessary for placements.\n";
    int e = goodcode(c, d);
    cout << "The remainder is " << e;

    return 0;
}
