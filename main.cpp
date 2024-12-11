#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer(commands.size());

    for (int i = 0; i < commands.size(); i++) {
        vector<int> temps(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);

        sort(temps.begin(), temps.end());

        answer[i] = temps[commands[i][2] - 1];
    }

    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    vector<int> test1 = {1, 5, 2, 6, 3, 7, 4};
    // vector<int> test2 = {1, 7, 1, 2};
    // vector<string> test1 = {"sun", "bed", "car"};
    // vector<string> test2 = {"abce", "abcd", "cdx"};
    vector<vector<int> > test3 = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    // vector<vector<int> > test4 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    // solution(test1,1);
    // solution(test2,2);

    // cout << "test1 : " << solution(test1) << endl;
    // cout << "test2 : " << solution(test2) << endl;

    vector<int> result1 = solution(test1, test3);
    cout << "Test 1 : [";
    for (int temps : result1) { // Range-based for loop
        cout << temps << ", ";
    }
    cout << "]" << endl;
    cout << endl;

    /*vector<int> result2 = solution(test2 , test4);
    cout << "Test 2 : [";
    for (int temps : result2) { // Range-based for loop
        cout << temps << " ,";
    }
    cout << "]" << endl;
    cout << endl;*/

    return 0;
}
