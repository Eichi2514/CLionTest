#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for (int i = 0; i < photo.size(); i++) {
        int score = 0;
        for (int j = 0; j < photo[i].size(); j++) {
            for (int k = 0; k < name.size(); k++) {
                if (name[k] == photo[i][j]) score += yearning[k];
            }
        }
        answer.push_back(score);
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
