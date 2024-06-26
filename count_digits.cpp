#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    if (number < 0) {
        number = -number;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int digitCount = countDigits(number);
    cout << "The number " << number << " has " << digitCount << " digits." << endl;
    return 0;
}
