#include <iostream>
#include <string>
using namespace std;

int main() {
    string words;
    cin >> words;

    int result = 0;
    int num = 0;
    char tmp = '+';
    int index = 0;

    while (index < words.length()) {
        char a = words[index];

        if (isdigit(a)) {
            num = num * 10 + (a - '0');
        }

        if (!isdigit(a) || index == words.length() - 1) {
            if (tmp == '+') {
                result += num;
            } else if (tmp == '-') {
                result -= num;
            } else if (tmp == '*') {
                result *= num;
            } else if (tmp == '/') {
                result /= num;
            }

            if (a == '=') break;

            tmp = a;
            num = 0;
        }

        index++;
    }

    cout << result << endl;
    return 0;
}