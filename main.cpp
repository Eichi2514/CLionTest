#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer;
    getline(cin, answer);

    for (char &ch : answer) {
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + 3) % 26 + 'a';
        }
    }

    cout << answer << endl;
    return 0;
}
