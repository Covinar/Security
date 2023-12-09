#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nGCD of numbers " << a << " and " << b << " is " << gcd(a, b);
    cout << "\nLCM of numbers " << a << " and " << b << " is " << lcm(a, b);

    return 0;
}
