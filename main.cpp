#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

     vector<int> stageCount(N + 1, 0);

     for (int i = 0; i < stages.size(); i++) {
        if (stages[i] <= N) {
            stageCount[stages[i]]++;
        }
    }

    vector<pair<int, double>> failureRates;
    int totalPlayers = stages.size();

     for (int i = 1; i <= N; i++) {
        if (totalPlayers == 0) {
            failureRates.push_back({i, 0.0});
        } else {
            double failureRate = (double)stageCount[i] / totalPlayers;
            failureRates.push_back({i, failureRate});
            totalPlayers -= stageCount[i];
        }
    }

     sort(failureRates.begin(), failureRates.end(),
        [](pair<int, double> a, pair<int, double> b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        });

     for (int i = 0; i < failureRates.size(); i++) {
        answer.push_back(failureRates[i].first);
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
