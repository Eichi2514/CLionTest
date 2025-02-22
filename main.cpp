#include <iostream>
using namespace std;

int main() {
    int n, l = 0, m = 1;
    cin >> n;

    for (int i = (n / 2) + 1; i <= n; i++) {
        for (int j = 1; j <= n / 2 - l; j++) {
            cout << " ";
        }
        for (int k = 1; k <= m; k++) {
            cout << "*";
        }
        l++;
        m += 2;
        cout << endl;
    }

    return 0;
}
