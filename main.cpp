#include <iostream>
using namespace std;

int sub (int n) {
    int sum = 1;
    if (n == 0) return sum;
    for (int i = 2; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << sub(n) / (sub(r) * sub(n-r)) << endl;

    return 0;
}