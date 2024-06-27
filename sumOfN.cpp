#include <iostream>
using namespace std;

int sum_of_n(int n) {
    if (n == 1)
        return n;
    else
        return n + sum_of_n(n - 1);
}

int main() {
    int n;
    cout << "Enter a number to calculate the sum of first n natural numbers: ";
    cin >> n;
    cout << "Sum of the first " << n << " natural numbers is: " << sum_of_n(n) << endl;
    return 0;
}
