#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string answer;
    cin >> answer;

    for (char &ch : answer) {
        if (isupper(ch)) {
            ch = tolower(ch);
        } else if (islower(ch)) {
            ch = toupper(ch);
        }
    }

    cout << answer << endl;

    return 0;
}