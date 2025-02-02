#include <iostream>
using namespace std;

int solution(int num) {
    for (int i = 1; i <= 9; i++) {
        cout << num << "*" << i << "=" << num * i << endl;
    }
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        solution(i);
    }
    return 0;
}
