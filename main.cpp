#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;

    for (int i = 0; i < score.size(); i++) {
        vector<int> temps(score.begin(), score.begin() + i + 1);
        sort(temps.begin(), temps.end());
        if (i < k) answer.push_back(temps[0]);
        else answer.push_back(temps[i-k+1]);

    }

    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    vector<int> test1 = {10, 100, 20, 150, 1, 100, 200};
    vector<int> test2 = {0, 300, 40, 300, 20, 70, 150, 50, 500, 1000};
    // vector<string> test1 = {"sun", "bed", "car"};
    // vector<string> test2 = {"abce", "abcd", "cdx"};
    // vector<vector<int> > test3 = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    // vector<vector<int> > test4 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    // solution(test1,1);
    // solution(test2,2);

    // cout << "test1 : " << solution(2, 1 ,20) << endl;
    // cout << "test2 : " << solution(3, 1 ,20) << endl;

    vector<int> result1 = solution(3, test1);
    cout << "Test 1 : [";
    for (int temps : result1) { // Range-based for loop
        cout << temps << ", ";
    }
    cout << "]" << endl;
    cout << endl;

    vector<int> result2 = solution(4, test2);
    cout << "Test 2 : [";
    for (int temps : result2) { // Range-based for loop
        cout << temps << " ,";
    }
    cout << "]" << endl;
    cout << endl;

    return 0;
}
