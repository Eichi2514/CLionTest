#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<vector<int>> temp = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {-1, 0, -2}
    };

    pair<int, int> L = {3, 0};
    pair<int, int> R = {3, 2};

    for (int i = 0; i < numbers.size(); i++) {
        int target = numbers[i];
        pair<int, int> pos;

        for (int x = 0; x < 4; x++) {
            for (int y = 0; y < 3; y++) {
                if (temp[x][y] == target) {
                    pos = {x, y};
                }
            }
        }

        if (target == 1 || target == 4 || target == 7) {
            answer += "L";
            L = pos;
        }
        else if (target == 3 || target == 6 || target == 9) {
            answer += "R";
            R = pos;
        }
        else {
            int leftDistance = (L.first > pos.first ? L.first - pos.first : pos.first - L.first) + (L.second > pos.second ? L.second - pos.second : pos.second - L.second);
            int rightDistance = (R.first > pos.first ? R.first - pos.first : pos.first - R.first) + (R.second > pos.second ? R.second - pos.second : pos.second - R.second);

            if (leftDistance < rightDistance) {
                answer += "L";
                L = pos;
            } else if (rightDistance < leftDistance) {
                answer += "R";
                R = pos;
            } else {
                if (hand == "left") {
                    answer += "L";
                    L = pos;
                } else {
                    answer += "R";
                    R = pos;
                }
            }
        }
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
