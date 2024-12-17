#include <string>
#include <cmath>
#include <vector>

using namespace std;

int tmp(char SDT) {
    return (SDT == 'S' ? 1 : (SDT == 'D' ? 2 : 3));
}

int solution(string d) {
    vector<int> scores(3);
    int idx = -1;

    for (int i = 0; i < d.size(); i++) {
        if (isdigit(d[i])) {
            idx++;
            if (d[i] == '1' && i + 1 < d.size() && d[i + 1] == '0') {
                scores[idx] = 10;
                i++;
            } else {
                scores[idx] = d[i] - '0';
            }
        } else if (d[i] == 'S' || d[i] == 'D' || d[i] == 'T') {
            scores[idx] = pow(scores[idx], tmp(d[i]));
        } else if (d[i] == '*') {
            scores[idx] *= 2;
            if (idx > 0) {
                scores[idx - 1] *= 2;
            }
        } else if (d[i] == '#') {
            scores[idx] *= -1;
        }
    }

    int answer = 0;
    for (int score : scores) {
        answer += score;
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
