#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int lower, upper;

    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are:\n";

    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
