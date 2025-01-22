#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i * i > num) {
            int k = num - ((i - 1) * (i - 1));
            int t = i - 1;
            cout << k << ' ' << t;
            break;
        }
    }

    return 0;
}