#include <iostream>
using namespace std;

int main() {
    long long DNA;
    int sum = 0;
    cin >> DNA;

    while (DNA > 0) {
        sum += DNA % 10;
        DNA /= 10;
    }

    cout << (sum % 7 == 4 ? "suspect" : "citizen");

    return 0;
}