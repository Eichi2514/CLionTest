#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;

    sort(strings.begin(), strings.end());

    vector<char> temps;
    for (int i = 0; i < strings.size(); i++) {
        temps.push_back(strings[i][n]);
    }

    sort(temps.begin(), temps.end());

    for (int i = 0; i < temps.size(); i++) {
        for (int j = 0; j < strings.size(); j++) {
            if (temps[i] == strings[j][n]) {
                answer.push_back(strings[j]);
                strings[j] = "0000000000";
                break;
            }
        }
    }

    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {1, 3, 4, 6};
    // vector<int> test2 = {1, 7, 1, 2};
    vector<string> test1 = {"sun", "bed", "car"};
    vector<string> test2 = {"abce", "abcd", "cdx"};
    // vector<vector<int> > test1 = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    // vector<vector<int> > test2 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    solution(test1,1);
    solution(test2,2);

    // cout << "test1 : " << solution(test1) << endl;
    // cout << "test2 : " << solution(test2) << endl;

    vector<string> result1 = solution(test1, 1);
    cout << "Test 1 : [";
    for (string strings : result1) { // Range-based for loop
        cout << strings << ", ";
    }
    cout << "]" << endl;
    cout << endl;

    vector<string> result2 = solution(test2 , 2);
    cout << "Test 2 : [";
    for (string strings : result2) { // Range-based for loop
        cout << strings << " ,";
    }
    cout << "]" << endl;
    cout << endl;

    return 0;
}
