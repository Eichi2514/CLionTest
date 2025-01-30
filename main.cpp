#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    for (int i = l; i >= 1; i--) {
        if (n % i == 0 && m % i == 0 && l % i == 0 ) {
            cout << i << endl;
            return 1;
        }
    }

    return 0;
}