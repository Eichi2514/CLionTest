#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int num = section[0];;

    for (int i = 0; i < section.size(); i++) {
        if (num + m - 1 < section[i]) {
            answer++;
            num = section[i];
        }
    }

    cout << "test1 : " << answer << endl;

    return answer;
}

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    vector<int> test1 = {2, 3, 6};
    vector<int> test2 = {1, 3};
    // vector<string> test1 = {"sun", "bed", "car"};
    // vector<string> test2 = {"abce", "abcd", "cdx"};
    // vector<vector<int> > test3 = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    // vector<vector<int> > test4 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    solution(8,4,test1);
    solution(5,4,test2);

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
