#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> tester1 = {1, 2, 3, 4, 5};
    int testNo1 = 0;
    vector<int> tester2 = {2, 1, 2, 3, 2, 4, 2, 5};
    int testNo2 = 0;
    vector<int> tester3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int testNo3 = 0;

    for (int i = 0; i < answers.size(); i++) {
        if (i >= tester1.size()) {
            if (answers[i] == tester1[i % 5]) {
                testNo1++;
            }
        } else {
            if (answers[i] == tester1[i]) {
                testNo1++;
            }
        }

        if (i >= tester2.size()) {
            if (answers[i] == tester2[i % 8]) {
                testNo2++;
            }
        } else {
            if (answers[i] == tester2[i]) {
                testNo2++;
            }
        }

        if (i >= tester3.size()) {
            if (answers[i] == tester3[i % 10]) {
                testNo3++;
            }
        } else {
            if (answers[i] == tester3[i]) {
                testNo3++;
            }
        }
    }

    if (testNo1 == testNo2 && testNo1 == testNo3) {
        answer = {1, 2, 3};
    } else if (testNo1 == testNo2) {
        if (testNo3 > testNo1) {
            answer = {3};
        } else answer = {1, 2};
    } else if (testNo2 == testNo3) {
        if (testNo1 > testNo2) {
            answer = {1};
        } else answer = {2, 3};
    } else if (testNo1 == testNo3) {
        if (testNo2 > testNo1) {
            answer = {2};
        } else answer = {1, 3};
    } else {
        if (testNo1 > testNo2 && testNo1 > testNo3) answer = {1};
        else if (testNo2 > testNo1 && testNo2 > testNo3) answer = {2};
        else answer = {3};
    }

    return answer;
}


#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {9, 20, 28, 18, 11};
    // vector<int> test2 = {30, 1, 21, 17, 28};
    // vector<string> test1 = {"sun", "bed", "car"};
    // vector<string> test2 = {"abce", "abcd", "cdx"};
    // vector<vector<int> > test3 = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    // vector<vector<int> > test4 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    // solution(test1,1);
    // solution(test2,2);

    // cout << "test1 : " << solution(2, 1 ,20) << endl;
    // cout << "test2 : " << solution(3, 1 ,20) << endl;

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
