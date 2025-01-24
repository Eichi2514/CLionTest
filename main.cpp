#include <iostream>
using namespace std;

int main() {
    int max, min;
    cin >> max;
    min = max;

    for (int i = 0; i < 4; i++) {
        int tmp;
        cin >> tmp;
        if (tmp < min) {
            min = tmp;
        }
        if (tmp > max) {
            max = tmp;
        }
    }

    cout << max << endl;
    cout << min << endl;
    return 0;
}