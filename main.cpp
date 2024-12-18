#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    unordered_map<char, int> countX, countY;

    for (char c : X) {
        countX[c]++;
    }
    for (char c : Y) {
        countY[c]++;
    }

    for (char c = '9'; c >= '0'; c--) {
        int commonCount = min(countX[c], countY[c]);
        for (int i = 0; i < commonCount; i++) {
            answer += c;
        }
    }

    if (answer.empty()) {
        answer = "-1";
    }

    if (answer[0] == '0') {
        answer = "0";
    }

    return answer;
}


#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {2, 3, 6};
    // vector<int> test2 = {1, 3};
    // vector<string> test1 = {"aya", "yee", "yeye", "woowoo", "ma"};
    // vector<string> test2 = {"ayayeayayeaya", "mayewoo", "yemawoo"};
    // vector<vector<int> > test3 = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    // vector<vector<int> > test4 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    // solution(8,4,test1);
    // solution(5,4,test2);

    // cout << "test1 : " << solution(test1) << endl;
    // cout << "test2 : " << solution(test2) << endl;

    // vector<string> result1 = solution(5, test1, test2);
    // cout << "Test 1 : [";
    // for (string temps : result1) { // Range-based for loop
    //     cout << temps << ", ";
    // }
    // cout << "]" << endl;
    // cout << endl;

    // vector<int> result2 = solution(4, test2);
    // cout << "Test 2 : [";
    // for (int temps : result2) { // Range-based for loop
    //     cout << temps << " ,";
    // }
    // cout << "]" << endl;
    // cout << endl;

    return 0;
}
