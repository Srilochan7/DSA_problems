#include <iostream>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    long long rev = 0, temp = x;

    while (temp != 0) {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    return (rev == x);
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    bool isPal = isPalindrome(num);
    if (isPal) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }

    return 0;
}
