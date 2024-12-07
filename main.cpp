#include <iostream>
#include <string>

using namespace std;

string solution(string s, int n) {
    string result = "";

    for (char c: s) {
        if (c >= 'a' && c <= 'z') {
            if (c + n <= 'z') result += c + n;
            else result += c + n - 26;
        } else if (c >= 'A' && c <= 'Z') {
            if (c + n <= 'Z') result += c + n;
            else result += c + n - 26;
        } else result += c;
    }

    return result;
}

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {-3, -2, -1, 0, 1, 2, 3};
    // vector<int> test2 = {2, 2, 3, 3};
    // vector<vector<int> > test1 = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    // vector<vector<int> > test2 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    cout << "Test 1 : " << solution("ZZZZ", 1) << endl;
    cout << "Test 2 : " << solution("WFUHZXajksndriyoeaFSUIZ", 1) << endl;

    return 0;
}
