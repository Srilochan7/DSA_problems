#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, sum = 0, n = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        int remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
