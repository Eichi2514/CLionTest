#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    double c = a;

    for (int i = 0; i < b; i++) {
        int change;
        cin >> change;
        c *= (1 + change / 100.0);
    }

    double tmp = round(c - a);

    cout << tmp << endl;

    if (tmp > 0.5) {
        cout << "good" << endl;
    } else if (tmp < -0.5) {
        cout << "bad" << endl;
    } else {
        cout << "same" << endl;
    }

    return 0;
}