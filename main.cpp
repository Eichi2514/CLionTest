#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer = vector<int>(s.length());
    answer[0] = -1;
    for (int i = 1; i < s.length(); i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                answer[i] = i-j;
            }
        }
        if (answer[i] == 0) {
            answer[i] = -1;
        }
    }
    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {-3, -2, -1, 0, 1, 2, 3};
    // vector<int> test2 = {2, 2, 3, 3};
    // vector<vector<int> > test1 = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    // vector<vector<int> > test2 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};


    cout << "Test 1 : " << solution("banana") << endl;
    cout << "Test 2 : " << solution("foobar") << endl;

    return 0;
}