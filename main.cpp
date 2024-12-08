#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            answer.push_back(numbers[i]+numbers[j]);
        }
    }

    sort(answer.begin(), answer.end());

    auto last = unique(answer.begin(), answer.end());

    answer.erase(last, answer.end());

    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    vector<int> test1 = {2,1,3,4,1};
    vector<int> test2 = {5,0,2,7};
    // vector<vector<int> > test1 = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    // vector<vector<int> > test2 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};


    vector<int> result1 = solution(test1);
    cout << "Test 1 : [";
    for (int num : result1) { // Range-based for loop
        cout << num << ", ";
    }
    cout << "]" << endl;
    cout << endl;

    vector<int> result2 = solution(test2);
    cout << "Test 2 : [";
    for (int num : result2) { // Range-based for loop
        cout << num << " ,";
    }
    cout << "]" << endl;
    cout << endl;

    return 0;
}