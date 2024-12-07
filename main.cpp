#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int> > sizes) {
    int min = 0;
    int max = 0;

    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] >= sizes[i][1]) {
            if (max < sizes[i][0]) max = sizes[i][0];
            if (min < sizes[i][1]) min = sizes[i][1];
        } else {
            if (max < sizes[i][1]) max = sizes[i][1];
            if (min < sizes[i][0]) min = sizes[i][0];
        }
    }

    int answer = max * min;
    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {-3, -2, -1, 0, 1, 2, 3};
    // vector<int> test2 = {2, 2, 3, 3};
    vector<vector<int> > test1 = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    vector<vector<int> > test2 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    cout << "Test 1 : " << solution(test1) << endl;
    cout << "Test 2 : " << solution(test2) << endl;

    return 0;
}
