#include <iostream>
using namespace std;

int main() {
    int n, m = 0, l = 0;
    cin >> n;

    for (int i = n / 2; i > 0; i--) {
        if (i * (n - 2 * i) > l) {
            l = i * (n - 2 * i);
            m = i;
        } else if (i * (n - 2 * i) == l && i < m) {
            m = i;
        }
    }

    cout << m << endl;
    return 0;
}
