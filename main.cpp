#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            if (isPrime(a) && isPrime(b)) {
                cout << a << " " << b;
                return 0;
            }
        }
    }

    cout << "wrong number";
    return 0;
}
