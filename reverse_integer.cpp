#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

int reverse(int n) {
    int ans = 0;
    while (n != 0) {
        int x = n % 10;
        n /= 10;

        // Check for overflow before updating ans
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && x > 7)) return 0;
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && x < -8)) return 0;

        ans = ans * 10 + x;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter number :";
    cin >> num;

    int reversed = reverse(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
