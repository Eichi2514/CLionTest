#include <string>

using namespace std;

string solution(string s) {
    int idx = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            idx = 0;
            continue;
        }
        if (idx % 2) {
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
        idx++;
    }
    return s;
}

#include <iostream>

int main() {
    string test1 = "try hello world";
    string test2 = "this is a test";

    cout << "Test 1 : " << solution(test1) << endl;
    cout << "Test 2 : " << solution(test2) << endl;

    return 0;
}
