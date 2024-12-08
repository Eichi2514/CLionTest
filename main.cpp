#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for (int i = 1; i < food.size(); i++) {
        for (int j = 0; j < food[i]/2; j++) {
            answer += to_string(i);
        }
    }
    answer += to_string(0);
    for (int i = food.size()-1; i > 0; i--) {
        for (int j = 0; j < food[i]/2; j++) {
            answer += to_string(i);
        }
    }
    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    vector<int> test1 = {1, 3, 4, 6};
    vector<int> test2 = {1, 7, 1, 2};
    // vector<vector<int> > test1 = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    // vector<vector<int> > test2 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    cout << "test1 : " << solution(test1) << endl;
    cout << "test2 : " << solution(test2) << endl;

    /*vector<int> result1 = solution(test1);
    cout << "Test 1 : [";
    for (int num : result1) { // Range-based for loop
        cout << num << ", ";
    }
    cout << "]" << endl;
    cout << endl;*/

    /*vector<int> result2 = solution(test2);
    cout << "Test 2 : [";
    for (int num : result2) { // Range-based for loop
        cout << num << " ,";
    }
    cout << "]" << endl;
    cout << endl;

    return 0;*/
}