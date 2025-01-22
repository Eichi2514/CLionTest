#include <iostream>
using namespace std;

int main() {
    int a, b;
    int num = 0;

    cin >> a >> b;  // 한 줄에 두 개의 정수 입력

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << '-'<< i;
            num -= i;
        }
        else {
            if (i != a) cout << '+';
            cout << i;
            num += i;
        }
    }

    cout << '=' << num;

    return 0;
}